#include <iostream>
#include <conio.h>

using namespace std;

class sepeda{
	public: //
		char merek[20], model[20], warna[20];
		short jlhroda,kecepatan;
		
		void dayung(int p){
			kecepatan+=p;
		}
		void rem(int p){
			kecepatan-=p;
			if (kecepatan<0) kecepatan=0;
		}
		
};
int main(){
	sepeda bmx;
	char pil;
	short p;
	
	do{
	
	cout<<"merek : "<<bmx.merek<<endl;
	cout<<"warna: " <<bmx.warna<<endl;
	cout<<"Kecepatan:"<<bmx.kecepatan<<endl;
	
	
		cout<<"menu utama simulasi sepeda\n";
		cout<<"D. dayung\n";
		cout<<"R. rem\n";
		cout<<"Esc = Keluar\n";
		cout<<"Silahkan pilih: ";
		pil = getch ();
		cout<<pil<<endl;
		
		switch (pil) {
		case 'D': case'd':
		cout<<"masukan kecepatan: ";
		cin>>p;
		bmx.dayung(p);
		break;
		case 'R' : case'r':
		cout<<"masukan pengereman: ";
		cin>>p;
		bmx.rem(p);
	}
		
	} while (pil!=27);
	return 0;
}
	
	
//	cout<<"kecepatan awal: "<<bmx.kecepatan<<endl;
//	bmx.dayung(40);
//	cout<<"kecepatan melaju: "<<bmx.kecepatan<<endl;
//	bmx.rem(20);
//	cout<<"kecepatan menurun setelah mengerem: "<<bmx.kecepatan<<endl;
//	return 0;
//}

