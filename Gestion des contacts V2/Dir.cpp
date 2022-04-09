#include"Dir.hpp"
	Contact::Contact(string name,string phone,string email){
		this->name=name;
		this->phone=phone;
		this->email=email;
	}
	Contact::Contact(const Contact&c){
		this->name=c.name;
		this->phone=c.phone;
		this->email=c.email;
	}
	string Contact::toString() const{
		return "Name : "+name+"\n Phone : "+phone+"\n Email : "+email;
	}
	bool Contact::compare(const Contact &c) const{
		return name<c.name;
	}
	bool Contact::operator<(const Contact &c) const{
		return name<c.name;
	}
	void Contact::print() const{
		cout << this->toString() << endl;
	}
	Node::Node(string name,string email,string phone){
		this->contact=new Contact(name,email,phone);
		this->next=NULL;
		this->previous=NULL;
	}
	Node::Node(const Contact &contact){
		this->contact=new Contact(contact);
		this->next=NULL;
		this->previous=NULL;
	}
	Node::~Node(){
		delete contact;
	}
	string Node::toString() const{
		return this->contact->toString();
	}
//	List::List()::head(nullptr),size(0){}
//	Ou bien
	List::List(){
		head=NULL;
		size=0;
	}
	
	List::~List(){
		Node *current=head;
		while(current!=NULL){
			head=head->next;
			delete current;
			current = head;
		}
	}
	void List::add(const Contact &c){
		Node *NewNode=new Node(c);
		Node *temp;
		temp=head;
		if(size!=0){
			while(c->Contact->name<name && temp->next!=NULL){
				if(temp->contact<NewNode->contact && NewNode->contact<temp->next->contact){
					NewNode->next=temp->next->next;
					temp->next=NewNode;
					return;
				}
				temp=temp->next;
			}
		}
		else{
			NewNode->previous=(Node *)&head;
			NewNode->next=NULL;
			head=NewNode;
		}
	}
	
