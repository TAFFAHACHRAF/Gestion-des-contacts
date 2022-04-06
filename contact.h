#ifndef _Contact_
	#define _Contact_
	class contact{
	private:
		int id;
		string nom;
		string tel;
		string email;
	public:
		int size=0;
		contact(){
			id=size;
			nom="";
			tel="";
			email="";
			size++;
		}
		contact(string nom,string tel,string email){
			id=size;
			this->nom=nom;
			this->tel=tel;
			this->email=email;
			size++;
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
		int getSize(){
			return size;
		}
		void push(string nom,string tel,string email){
			id=size;
			this->nom=nom;
			this->tel=tel;
			this->email=email;
			size++;
		}
		void display(){
			cout << "Id:" << id << "\n";
			cout << "Nom:" << nom << "\n";
			cout << "Tel:" << tel << "\n";
			cout << "Email:" << email << "\n";
		}
	};
#endif 

