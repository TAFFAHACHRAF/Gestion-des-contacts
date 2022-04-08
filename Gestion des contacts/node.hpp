#ifndef _Node_
	#define _Node_
	#include"contact.hpp"
	class node{
		public:
			contact *data;
			node *next;
			node *previous;
			node(){
				data=NULL;
				next=NULL;
				previous=NULL;
			}
			node(contact *c){
				data=c;
				next=NULL;
				previous=NULL;
			}
			node(node *n){
				this->data=n->data;
				this->next=n->next;
				this->previous=n->previous;
			}
	};
#endif 
