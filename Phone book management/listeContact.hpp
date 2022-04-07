#ifndef _ListContact_
	#define _ListContact_
	#include"node.hpp"
	class listContact{
		public:
			node *head;
			listContact(){
				head=NULL;
			}
			listContact(contact *c){
				head->data=c;
			}
			listContact(listContact *l){
				this->head=l->head;
			}
			void AddContact(string nom,string tel,string email){
				contact *c=new contact(nom,tel,email);
				node *last=new node(c);
				if(head==NULL)
					head=last;
				else{
					node *temp=new node();
					temp=head;
					while(temp->next!=NULL){
						temp=temp->next;
					}
					temp->next=last;
				}
			}
			void ModifierContact(string nom,contact c){
				
			}
			void display(){
				node *temp=new node(head);
				if(temp==NULL){
					return;
				}
				else{
					while(temp!=NULL){
						temp->data->display();
						temp=temp->next;
					}
            	}
			}
	};
#endif
