#include <iostream>
#include <conio.h>
#include <string.h>



using namespace std;

class kreta{
	private: //
	
		char merek[20], model[20], warna[20] , jenis[20];
		short jlhroda,kecepatan;
		
		public:
			kreta(){
				
		char *getmerek() {return merek;}
		char *getmodel() {return model;}
		char *getwarna() {return warna;}
		short *getjlhroda() {return jlhroda;}
		short getkec () {return kecepatan;}
			
			
				strcpy (merek, "vario");
				strcpy (warna, "biru dove");
				strcpy (jenis, "matic");
				jlhroda=2;
				kecepetan=0;
			}
			kreta(char mr[], char md[], char w[], short jr){
				strcpy (merek, mr);
				strcpy (model, md);
				strcpy (warna, w);
				jlhroda=jr;
				kecepatan=0;
			}
		
		void gas(int p){
			kecepatan+=p;
		}
		void rem(int p){
			kecepatan-=p;
			if (kecepatan<0) kecepatan=0;
		}
		
	
};
int main(){
	kreta honda;
	char pil;
	short p;
	
		
	do{
	
	cout<<"merek : "<<honda.merek<<endl;
	cout<<"warna: " <<honda.warna<<endl;
	cout<<"Kecepatan:"<<honda.kecepatan<<endl;
	

	
		cout<<"menu utama simulasi kreta\n";
		cout<<"D. gas\n";
		cout<<"R. rem\n";
		cout<<"Esc = Keluar\n";
		cout<<"Silahkan pilih: ";
		pil = getch ();
		cout<<pil<<endl;
		
		switch (pil) {
		case 'D': case'd':
		cout<<"masukan kecepatan: ";
		cin>>p;
		vario.gas(p);
		break;
		case 'R' : case'r':
		cout<<"masukan pengereman: ";
		cin>>p;
		vario.rem(p);
	}
		
	} while (pil!=27);
	return 0;
}
	
