#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class contact{
	public:
		int id;
		char nom[50];
		char tel[20];
		char email[255];
		contact *next;
		contact *previous;
		
		contact(){
			this->id=0;
			strcpy(this->nom,"");
			strcpy(this->tel,"");
			strcpy(this->email,"");
			next=NULL;
			previous=NULL;
		}
		
		contact(int id,char nom[],char tel[],char email[]){
			this->id=id;
			strcpy(this->nom,nom);
			strcpy(this->tel,tel);
			strcpy(this->email,email);
			next=NULL;
			previous=NULL;
		}
		void setContact(int id,char nom[],char tel[],char email[]){
			this->id=id;
			strcpy(this->nom,nom);
			strcpy(this->tel,tel);
			strcpy(this->email,email);
		}
		void toString(){
			cout << "Id:" << this->id << "\n";
			cout << "Nom:" << this->nom << "\n";
			cout << "Tel:" << this->tel << "\n";
			cout << "Email:" << this->email << "\n";
		}
};
class listeContacts{
	private:
		contact *header;
		contact *tail;
		int size;
	public:
		listeContacts(){
			contact *header;
			contact *tail;
			size=0;
		}
		void NewContact(int id,char nom[],char tel[],char email[]){
			contact *n = new contact(id,nom,tel,email);
			if(header == NULL){
				header=n;
				tail=n;
			}
			else{
				tail->next=n;
				tail=n;
			}
			size=size+1;
		};
		void SetContactNom(){
			contact *temp;
			temp=header;
			int id;
			char nom[50];
			char tel[20];
			char email[255];
			
			cout << "Entrer svp le nom : "<<endl;
			cin >> nom;
			
			while(temp!=NULL){
				if(strcmp(temp->nom,nom)==0){
					cout << "Entrer svp le nouveau id : "<<endl;
					cin >> id;
					
					cout << "Entrer svp le nouveau nom : "<<endl;
					cin >> nom;
					
					cout << "Entrer svp le nouveau tel : "<<endl;
					cin >> tel;
					
					cout << "Entrer svp le email : "<<endl;
					cin >> email;
					temp->setContact(id,nom,tel,email);
				}
				else{
					cout << "Ce nom nexiste pas dans la liste"<<endl;
					temp=NULL;
				}
				temp=temp->next;
			}
		}
		
		contact *getContact(int id){
			contact *temp = header;
			while(temp!=NULL){
				if(temp->id=id){
					return temp;
				} 
				temp=temp->next;
			}
			return NULL;
		}
		
		void DeleteContact(){
			contact *cur=header;
			contact *prev;
			
			cur=header;
			prev=NULL;
			char nom[50];
			
			cout << "Entrer svp le nom : "<<endl;
			cin >> nom;
			
			while(cur!=NULL){
				prev=cur;
				cur=cur->next;
				if(strcmp(cur->nom,nom)==0){
					tail=prev;
					prev->next=NULL;
					size--;
					delete cur;
				}
				else{
					cout << "Ce nom nexiste pas dans la liste"<<endl;
					cur=NULL;
				}
				cur=cur->next;
			}
		}
		int SearchContact(char nom[],char tel[],char email[]){
			contact *temp;
			temp=header;
			while(temp!=NULL){
				if(strcmp(temp->nom,nom)==0 ){
					temp->toString();
					temp->next=NULL;
					return 0;
					if(strcmp(temp->tel,tel)==0){
						temp->toString();
						temp->next=NULL;
						return 0;
						if(strcmp(temp->email,email)==0){
							temp->next=NULL;
							temp->toString();
							return 0;
						}
					}
				}
				temp=temp->next;
			}
		}
};
class repository_t{
	public:
		listeContacts *liste;
		int Nbre;
		
		repository_t(listeContacts liste,int Nbre){
			this->liste=liste;
			this->Nbre=Nbre;
		}

};

int main(){
	listeContacts l1;
	l1.NewContact(1,"achraf","0684134782","taffahachraf184@gmail.com");
	l1.NewContact(2,"ahmed ","879465","ahmed@gmail.com");
	l1.NewContact(3,"anas","789465","anas@gmail.com");
	l1.NewContact(4,"chaimae","7849","chaimae@gmail.com");
	l1.getContact(1)->toString();
	l1.SetContactNom();
	l1.getContact(2).toString();
	l1.DeleteContact();
	l1.getContact(3);
	l1.SearchContact("chaimae"," "," ");
	
	return 0;
}
