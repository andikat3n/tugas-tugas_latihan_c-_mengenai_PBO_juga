#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
	public:
		string nama;
		double ipk;
		
		mahasiswa (string inputnama,double ipk){
			//	mahasiswa (string inputnama){
			mahasiswa::nama = inputnama;
			mahasiswa::ipk = ipk;
			//nama= inputnama;
				
		}
		void tampilkandata(){
			cout <<" nama saya "<< nama <<" ipk saya adalah ";
			cout <<ipk<<endl;
		}
		void ubahnama(const char* namabaru){
			mahasiswa::nama= namabaru;
		}
};

int main(){
	mahasiswa mahasiswa1=mahasiswa("dika",4.0);
	mahasiswa mahasiswa2=mahasiswa("dirot",3.8);
	mahasiswa1.tampilkandata();
	mahasiswa2.tampilkandata();
	
	mahasiswa1.ubahnama("mario");
	mahasiswa1.tampilkandata();
}

