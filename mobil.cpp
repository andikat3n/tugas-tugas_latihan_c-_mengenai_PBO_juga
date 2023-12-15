#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

class balap{
	private:
		char merek[15], model[15], nopolisi[15];
		int arah, kecepatan, maksimum, gigi;
		bool mesin;
		
	public:
		balap(){ //constractor kosong
			strcpy(merek,"buatan sendiri");
			strcpy(model,"belum ada");
			strcpy(nopolisi,"belum terdaftar");
			kecepatan=arah=0;
			maksimum=300;
			mesin=false;
			gigi=0;
		}
		balap(char mr[],char m[], char np[]){
			strcpy(merek,mr);
			strcpy(model,m);
			strcpy(nopolisi,np);
			kecepatan=arah=0;
			maksimum=300;
			mesin=false;
			gigi=0;
		}
		
		//method
		void Hidupkan() {
			mesin=true;
			cout<<"mesin hidup";
		}
		
		void Padamkan(){
			mesin=false;
		}
		
		void Gas(int p){
			if (mesin){
			
			kecepatan+=p; 
			if(kecepatan>maksimum){
			 kecepatan++;
		}else if(kecepatan==maksimum){
			cout<<"kecepatan maksimum di 300"<<endl;
		}
		}
	}
		void Rem(int p){
			kecepatan-=p;
			if (kecepatan<0){
			 kecepatan = 0;
		}	
		}
		
		void belok(int p){
			kecepatan-=p;
			if (arah>=-45){
				cout<<"belok kiri";
		}else if (arah<=45){
			cout<<"belok kanan";
		}
		}
			 
		
		void naikgigi() {
            if (gigi < 7) {
                gigi++;
            } else if(gigi > 7) {
                cout << "gigi sudah maksimal";
            }
            
        }
		
	 void turungigi() {
            if (gigi > 0) {
                gigi--;
            } else if ( gigi = 0){
                 // set gigi ke netral (0)
                cout<<"gigi sudah netral"<<endl;
            }
            
        }
		
		//accesor
		char *getmerek() 
		{
			return merek;
		}
		
		char *getmodel(){
			return model;
		}
		
		char *getnopolisi(){
			return nopolisi;
		}
		char* getmesin() {
            if (mesin=true) {
                return "hidup";
            } else if(mesin=false) {
                return "padam";
            }
        }
		
		int getarah(){
			return arah;
		}
		
		int getkecepatan(){
			return kecepatan;
		}
		
		int getmaksimum(){
			return maksimum;
		}
		
		int getgigi(){
			return gigi;
		}
};

int main()

{
	balap civic("Honda","Civic Turbo","BK 1 AJA");
	char pil;
	short p;
	
	do{
		
		cout<<"merek   : "<<civic.getmerek()<<endl;
		cout<<"model   : "<<civic.getmodel()<<endl;
		cout<<"nopolisi: "<<civic.getnopolisi()<<endl;
		cout<<"kecepatan:"<<civic.getkecepatan()<<endl;
		
		
		
		cout<<"\nmenu utama simulasi mobil manual\n";
		cout<<"-------------------------------------\n";
		cout<<" H/h. Hidupkan\n";
		cout<<"P/p. Padamkan\n";
		cout<<"G/g. Gas\n";
		cout<<"B/b. Belok\n";
		cout<<"R/r. Naikan gigi\n";
		cout<<"L/l. Turunkan gigi\n";
		cout<<"B/b. Rem\n";
		cout<<"Esc ---> Keluar program\n";
		cout<<"---------------------------\n";
		cout<<"Silahkan pilih :";
		pil=getch();
		cout<<pil<<endl;
		
		
		switch (pil){
			case 'H' : case 'h' : civic.Hidupkan(); break;
			cout<<"\nmesin sudah hidup\n";
			case 'P' : case 'p' : civic.Padamkan();break;
			case 'G' : case 'g'	: 
			cout<<"masukan percepatan : ";
			cin>>p;
			civic.Gas(p);
			
			case 'R' : case 'r' :
			cout<<"Tambah Gigi :";
			cin>>p;
			civic.naikgigi();
			
			case 'L' : case 'l' :
			cout<<"turunkan gigi :";
			cin>>p;
			civic.turungigi();
			
		 case 'B' : case 'b' : // menambahkan kasus belok
                cout<<"Belokan :\n";
                cout<<"-45 untuk belok kiri\n";
                cout<<"45 untuk belok kanan\n";
                cin>>p;
                civic.belok(p);
        
        
        case 'S' : case 's' : // menambahkan kasus rem
                cout<<"Berapa kali pengereman ? ";
                cin>>p;
                civic.Rem(p);
				
				
				
				
		}
	
	
	
} while (pil != 27); // 27 adalah kode ASCII untuk tombol Esc
    
    return 0;
}
 
