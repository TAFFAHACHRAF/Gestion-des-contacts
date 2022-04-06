#ifndef _repository_t_
	#define _repository_t_
	class repository{
		private:
			int size=0;
		public:
			listContact *llist;
			repository_t(){
				llist=NULL;
				size++;
			}
	};
#endif
