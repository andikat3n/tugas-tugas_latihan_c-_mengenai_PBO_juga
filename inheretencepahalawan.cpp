#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;


class pahlawan{
	
	protected:
		char nama[16], gayarambut[16], tipebertarung[16];
		short lari, jlhsenjata, jlhdarah;
	
	
	public:	
		void kecepatan(short p){
			lari+=p;
			
		}
};

class level1 : public pahlawan{
	
	protected:
		char senjata[16];
		short kekuatan;
	public:
	level1(){
		strcpy(nama,"Dika.man");
		strcpy(gayarambut, "undercut");
		strcpy(tipebertarung, "menyerang");
		strcpy(senjata,"pedang");
		jlhdarah=100;
		kekuatan=0;
	}	
	
	void serang(short p){
		
		cout<<"masukan power kekuatan :" ;
		cin>>kekuatan;
		kekuatan+=p;
	}
	
	void bertahan(short p){
		jlhdarah-=p;
		cout<<"tahan sebesar : ";
		cin>>jlhdarah;
	}
};

int main(){
	
	level1 tampil;
	tampil.serang();
	

}
