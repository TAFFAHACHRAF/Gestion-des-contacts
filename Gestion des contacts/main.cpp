#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
#include"repository.hpp"
int main(){
//	contact *c=new contact("achraf","0684127884","bonana@gmail.com");
//	contact *c2=new contact("Ahmed","8965","ahmed@gmail.com");
//	contact *c3=new contact("ziudah","8945612","ahmed@gmail.com");
//	contact *c4=new contact("aoziudh","987465","ahmed@gmail.com");
//	c2->display();
	listContact *l=new listContact();
	l->AddContact("achraf","0684127884","bonana@gmail.com");
	l->AddContact("Ahmed","8965","ahmed@gmail2.com");
	l->AddContact("aoziudh","987465","ahmed@gmail.com");
//	cout << l->getByNom("aoziudh")->data->getNom()<<endl;
//	cout << l->getByTel("8965")->data->getTel()<<endl;
//	cout << l->getByEmail("ahmed@gmal.com")->data->getNom()<<endl;
//	cout << l->getContactByEmail("ahmed@gmail.com")->getEmail();
	contact *c=new contact("baba","87465","eufh@gmail.com");
	l->updateContact("Ahmed",c);
	l->display();
//	l->display();
	return 0;
}
