
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class pokemon{
	public:
	short jlhekor, kecepatan, warna;
	char warna[16];
	
	private : 
	void lari(int p){
		kecepatan +=p;
	}
	public:
	void berhenti(int p){
		kecepatan +=p;
	}
	pokemon(){
		jlhekor=1;
	}
	
	
	class pokemonE : public pokemon{
		protected:
		short power;
		
		public :
		pokemonE(){
			strcpy{warna, "kuning";}
			jlhekor=2;
		}
		
		void pukulan (short p){
			power +=p
			
		}
	};
	
};
