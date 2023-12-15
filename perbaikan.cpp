#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

class balap {
    private:
        char merek[15], model[15], nopolisi[15];
        int arah, kecepatan, maksimum, gigi;
        bool mesin;

    public:
        balap() { //constractor kosong
            strcpy(merek, "buatan sendiri");
            strcpy(model, "belum ada");
            strcpy(nopolisi, "belum terdaftar");
            kecepatan = arah = 0;
            maksimum = 300;
            mesin = false;
            gigi = 0; // set gigi awal ke netral (0)
        }
        balap(char mr[], char m[], char np[]) {
            strcpy(merek, mr);
            strcpy(model, m);
            strcpy(nopolisi, np);
            kecepatan = arah = 0;
            maksimum = 300;
            mesin = false;
            gigi = 0; // set gigi awal ke netral (0)
        }

        //method
        void Hidupkan() {
        	 mesin = true;
        	 cout<<"Mesin hidup\n";
        	 cout<<"Gigi masih netral , masukan gigi terlebih dahulu sebelum gas\n";
        
            
        }

        void Padamkan() {
            mesin = false;
            cout<<"Mesin padam\n";
        }
        

        void Rem(int p) {
            kecepatan -= p;
            if(kecepatan<0){
            	kecepatan=0;
			}
		
           // kecepatan < 0 ;
             //   kecepatan = 0;
               // cout<<"Berhenti\n";
              
            	
           
		   
		  if (gigi==7){
		 // kecepatan-=p;
        	if(kecepatan<260){
			
            			cout<<"Gigi tujuh tidak bisa rem di bawah 260"<<endl;
						cout<<"turunkan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
			}
		 if (gigi==6){
		 // kecepatan-=p;
        	if(kecepatan<220){
			
            			cout<<"Gigi enam tidak bisa rem di bawah 220"<<endl;
						cout<<"turunkan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
			}
			 if (gigi==5){
		 // kecepatan-=p;
        	if(kecepatan<180){
			
            			cout<<"Gigi lima tidak bisa rem di bawah 180"<<endl;
						cout<<"turunkan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
	}
	 	if (gigi==4){
		 // kecepatan-=p;
        	if(kecepatan<140){
			
            			cout<<"Gigi empat tidak bisa rem di bawah 140"<<endl;
						cout<<"turunkan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
}
	 if (gigi==3){
		 // kecepatan-=p;
        	if(kecepatan<100){
			
            			cout<<"Gigi tiga tidak bisa rem di bawah 100"<<endl;
						cout<<"turunkan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
}
 	if (gigi==2){
		 // kecepatan-=p;
        	if(kecepatan<60){
			
            			cout<<"Gigi dua tidak bisa rem di bawah 60"<<endl;
						cout<<"turunkan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
	}
		 if (gigi==1){
		 // kecepatan-=p;
        	if(kecepatan<=0){
        	cout<<"Gigi satu tidak bisa rem di bawah 0"<<endl;
        	cout<<"kecepatan berhenti\n";
        	cout<<"Netralkan gigi\n";
        }
        	//if (kecepatan<=0){
        	//cout<<"kecepatan berhenti\n";
        	//cout<<"Netralkan gigi\n";
        
        	if(gigi==0){
        	cout<<"gigi sudah netral\n";
        }
        
						
						
		//	if(kecepatan==maksimum)	{
		//		cout<<"kecepatan sudah maksimum"<<endl;
		//	}	
		
	}
            
        }

        void belok(int arah) {
            
            if (arah <= -45 ) {
                cout << "belok kiri\n";
            } if(arah>=45) {
                cout << "belok kanan\n";
            }
        }

        void naikgigi() {
             
           if(gigi>=7){
		   
                cout << "gigi sudah maksimal\n";
            }else{
                gigi++;
        }
    }

        void turungigi() {
             if(gigi<=0){
		   
                cout << "gigi sudah netral\n";
            }else{
                gigi--;
        }
        }
 		void Gas(int p) {
		//	kecepatan+=p;
		//	kecepatan=maksimum;
		//	cout<<"kecepatan sudah maksimu"<<endl;
           
            	kecepatan+=p;  
            	
           
				 
         if ( gigi==0){
		 
            	cout<<"gigi masih netral, masukan gigi terlebih dahulu"<<endl;
            	
       }
           
		   
		  if (gigi==1){
		 // kecepatan-=p;
        	if(kecepatan>60){
        		cout<<"Gigi satu maksimal 60"<<endl;
		}else{
					
		}
            		
						
						
					
		}
			
		 if (gigi==2){
		 // kecepatan-=p;
        	if(kecepatan>100){
			
            			cout<<"Gigi dua maksimal 100"<<endl;
						cout<<"masukan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
			}
			 if (gigi==3){
		 // kecepatan-=p;
        	if(kecepatan>140){
			
            			cout<<"Gigi tiga maksimal 140"<<endl;
						cout<<"masukan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
	}
	 	if (gigi==4){
		 // kecepatan-=p;
        	if(kecepatan>180){
			
            			cout<<"Gigi empat maksimal 180"<<endl;
						cout<<"masukan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
}
	 if (gigi==5){
		 // kecepatan-=p;
        	if(kecepatan>220){
			
            			cout<<"Gigi lima maksimal 220"<<endl;
						cout<<"masukan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
}
 	if (gigi==6){
		 // kecepatan-=p;
        	if(kecepatan>260){
			
            			cout<<"Gigi enam maksimal 260"<<endl;
						cout<<"masukan gigi terlebih dahulu lagi : "<<endl;
						
					
		}
	}
		 if (gigi==7){
		 // kecepatan-=p;
        	if(kecepatan>maksimum){
        	cout<<"Gigi 7 maksimal 300"<<endl;
        }
			kecepatan==maksimum;
        //	cout<<"kecepatan sudah maksimum\n";
						
			// if(kecepatan<maksimum){
            	//kecepatan=maksimum;
						
		//	if(kecepatan==maksimum)	{
		//		cout<<"kecepatan sudah maksimum"<<endl;
		//	}	
		
	}
	
}
		
        //accesor
        char* getmerek() {
            return merek;
        }

        char* getmodel() {
            return model;
        }

        char* getnopolisi() {
            return nopolisi;
        }

        char* getmesin() {
            if (mesin) {
                return "hidup";
            } else {
                return "padam";
            }
        }

        int getarah() {
            return arah;
        }

        int getkecepatan() {
            return kecepatan;
        }

        int getmaksimum() {
            return maksimum;
        }

        int getgigi() {
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
        cout<<"Gigi	:"<<civic.getgigi()<<endl;
        cout<<"mesin :"<<civic.getmesin()<<endl;
       // cout<<"arah :"<<civic.getarah()<<endl;
        
       	cout<<"\nmenu utama simulasi mobil manual\n";
		cout<<"-------------------------------------\n";
		cout<<" H/h. Hidupkan\n";
		cout<<"P/p. Padamkan\n";
		cout<<"G/g. Gas\n";
		cout<<"B/b. Belok\n";
		cout<<"R/r. Naikan gigi\n";
		cout<<"L/l. Turunkan gigi\n";
		cout<<"S/s. Rem\n";
		cout<<"Esc ---> Keluar program\n";
		cout<<"---------------------------\n";
		cout<<"Silahkan pilih :";
		pil=getch();
		cout<<pil<<endl;
        
        switch (pil){
            case 'H' : case 'h' : civic.Hidupkan();
            
			
            	
           
            break;
            case 'P' : case 'p' : civic.Padamkan(); break; // mengubah Matikan() menjadi Padamkan()
            case 'G' : case 'g' : 
                cout<<"masukan percepatan : ";
                cin>>p;
                
                break; // tambahkan break setelah setiap kasus
            case 'R' : case 'r' :
                cout<<"Tambah Gigi :";
                cin>>p;
                civic.naikgigi();
                break;
            case 'L' : case 'l' :
                cout<<"turunkan gigi :";
                cin>>p;
                civic.turungigi();
                break;
            case 'B' : case 'b' : // menambahkan kasus belok
                cout<<"Belokan :";
                cin>>p;
                civic.belok(p);
                break;
            case 'S' : case 's' : // menambahkan kasus rem
                cout<<"Masukan perlambatan : ";
                cin>>p;
                civic.Rem(p);
                break;
        }
    } while 
    
	(pil != 27); // 27 adalah kode ASCII untuk tombol Esc
    
    return 0;
}
