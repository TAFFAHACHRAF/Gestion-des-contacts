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
	l->AddContact("Ahmed","8965","ahmed@gmail.com");
	l->AddContact("aoziudh","987465","ahmed@gmail.com");
	l->display();
	return 0;
}
