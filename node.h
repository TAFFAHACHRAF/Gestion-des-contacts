#ifndef _Node_
	#define _Node_
	class node{
		public:
			contact *data;
			contact *next;
			contact *previous;
			node(){
				data=NULL;
			}
			node(contact *c){
				data=c;
			}
			node(node *n){
				data=n->data;
			}
	};
#endif 
