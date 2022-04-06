#ifndef _ListContact_
	#define _ListContact_
	class listContact{
		private:
			int size=0;
		public:
			node *head;
			listContact(){
				head=NULL;
				size++;
			}
			listContact(node *llist){
				head=llist;
				size++;
			}
			int getSize(){
				return size;
			}
			void push(node *contact){
				node *temp=head;
				if(head==NULL)
					head=contact;
				else{
					while(temp->next!=NULL){
						temp=temp->next;
					}
					head->previous=temp->data;
					head->data=temp->next;
					head->previous=NULL;				
				}
			}
	};
#endif
