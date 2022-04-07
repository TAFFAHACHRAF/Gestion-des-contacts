#ifndef _Contact_
	#define _Contact_
	#include<math.h>
	class contact{
	private:
		int id;
		string nom;
		string tel;
		string email;
	public:
		contact(){
			id=rand();
			nom="";
			tel="";
			email="";
		}
		contact(string nom,string tel,string email){
			id=rand();
			this->nom=nom;
			this->tel=tel;
			this->email=email;
		}
		contact(contact *c){
			this->id=c->id;
			this->nom=c->nom;
			this->tel=c->tel;
			this->email=c->email;
		}
		void setId(int id){
			this->id=id;
		}
		int getId(){
			return id;
		}
		void setNom(string nom){
			this->nom=nom;
		}
		string getNom(){
			return nom;
		}
		void setTel(string tel){
			this->tel=tel;
		}
		string getTel(){
			return tel;
		}
		void setEmail(string email){
			this->email=email;
		}
		string getEmail(){
			return email;
		}
//		void Add(string nom,string tel,string email){
//			id=size;
//			this->nom=nom;
//			this->tel=tel;
//			this->email=email;
//			size++;
//		}
		void display(){
			cout << "Id:" << id << "\n";
			cout << "Nom:" << nom << "\n";
			cout <<  "Tel:" << tel << "\n";
			cout << "Email:" << email << "\n";
		}
	};
#endif 

