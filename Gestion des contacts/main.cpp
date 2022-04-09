#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
#include"repository.hpp"
int main(){
	repository *t=new repository();
	t->AddContact("achraf","0684134782","taffahachraf184@gmail.com");
	t->AddContact("anas","07458246","anas187@gmail.com");
	t->AddContact("khalid","01458246","khalid@gmail.com");
	t->Display();
	return 0;
}
