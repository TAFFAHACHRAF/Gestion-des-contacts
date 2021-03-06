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
				if(head==NULL){
					head=last;
					head->next=NULL;
					head->previous=NULL;
				}
				else{
					node *temp=new node();
					temp=head;
					while(temp->next!=NULL){
						temp=temp->next;
					}
					temp->previous=temp;
					temp->next=last;
				}
			}
			void DeleteLast(){
				if(head==NULL || head->next==NULL){
					head=NULL;
				}
				else{
					node *temp=new node();
					temp=head;
					while(temp->next->next!=NULL){
						temp=temp->next;
					}
					temp->next=NULL;
				}	
			}
			void DeleteFirst(){
				if(head==NULL || head->next==NULL){
					head=NULL;
				}
				else{
					node *temp=new node();
					temp=head->next;
					head=temp;
				}
			}
//			void DeleteByNom(string nom){
//				node *result=new node();
//				result=getByNom(nom);
//				if(result==NULL || result->next==NULL){
//					result=NULL;
//				}
//				else{
//					node *temp=new node();
//					temp=head;
//					while(temp!=NULL){
//						if(temp->next==result){
//							temp->next=temp->next->next;
//							return;
//						}
//						temp=temp->next;
//					}
//				}
//			}
            node *getByNom(string nom){
            	if(head->data->getNom()==nom)
            	   return head;
            	else{
				   node *temp=head;
				   while(temp!=NULL){
				   	if(temp->data->getNom()==nom){
				   		return temp;	
					}
				   	temp=temp->next;
				   }
					return NULL;
				}
			} 
			node *getByTel(string tel){
            	if(head->data->getTel()==tel)
            	   return head;
            	else{
				   node *temp=head;
				   while(temp!=NULL){
				   	if(temp->data->getTel()==tel){
				   		return temp;	
					}
				   	temp=temp->next;
				   }
					return NULL;
				}
			}  
			node *getByEmail(string email){
            	if(head->data->getEmail()==email)
            	   return head;
            	else{
				   node *temp=head;
				   while(temp!=NULL){
				   	if(temp->data->getEmail()==email){
				   		return temp;	
					}
				   	temp=temp->next;
				   }
					return NULL;
				}
			}     
			contact *getContactByNom(string nom){
				node *temp=this->getByNom(nom);
				if(temp){
					return temp->data;
				}
				return NULL;
			}    
			contact *getContactByTel(string tel){
				node *temp=this->getByTel(tel);
				if(temp){
					return temp->data;
				}
				return NULL;
			}          
			contact *getContactByEmail(string email){
				node *temp=this->getByEmail(email);
				if(temp){
					return temp->data;
				}
				return NULL;
			}  
			void updateContact(string Nom,contact *c){
				node *temp=new node(getByNom(Nom));
				if(!temp){
					return;
				}
				else{
					temp->data->setNom(c->getNom());
					temp->data->setTel(c->getNom());
					temp->data->setEmail(c->getEmail());
				}
			}       	   
			void display(){
				node *temp=new node(head);
				if(temp==NULL){
					cout << "Rien a afficher";
				}
				else{
					while(temp!=NULL){
						temp->data->display(); cout <<endl;
						temp=temp->next;
					}
            	}
			}
	};
#endif
