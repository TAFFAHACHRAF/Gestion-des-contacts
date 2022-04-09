#ifndef _repository_t_
	#define _repository_t_
	#include"listeContact.hpp"
	class repository{
		listContact listes[27];
		public:
			repository(){
				for(int i=0;i<26;i++){
					listes[i]=listContact();
				}
			}
			void AddContact(string nom,string tel,string email){
			    int index = toupper(nom[0])-65;
				listes[index].AddContact(nom,tel,email);
			}
			void Display(){
				listes[1].display();
			}
	};
#endif
