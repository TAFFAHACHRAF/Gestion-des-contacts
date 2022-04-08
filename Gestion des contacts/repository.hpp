#ifndef _repository_t_
	#define _repository_t_
	#include"listeContact.hpp"
	class repository{
		listContact llist[27];
		public:
			repository_t(){
				for(int i=0;i<26;i++){
					llist[i]=listContact();
				}
			}
			void AddContact(){
				
			}
	};
#endif
