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
        balap() { //constractor default
            strcpy(merek, "buatan sendiri");
            strcpy(model, "belum ada");
            strcpy(nopolisi, "belum terdaftar");
            kecepatan = arah = 0;
            maksimum = 300;
            mesin = false;
            gigi = 0; // set gigi awal ke netral (0)
        }
        balap(char mr[], char m[], char np[]) { //contarctor overloading
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
            	
           
		   
		  if (gigi==7){
		 // kecepatan-=p;
        	if(kecepatan<260){
        		kecepatan=260;
						
					
		}
			}
		
		 if (gigi==6){
		 // kecepatan-=p;
        	if(kecepatan<220){
			kecepatan=260;
            	
					
		}
			}
			 if (gigi==5){
		 // kecepatan-=p;
        	if(kecepatan<180){
			kecepatan=180;
            		
					
		}
	}
	 	if (gigi==4){
		 // kecepatan-=p;
        	if(kecepatan<140){
			kecepatan=140;
            		
						
					
		}
}
	 if (gigi==3){
		 // kecepatan-=p;
        	if(kecepatan<100){
			
            kecepatan=100;
					
		}
}
 	if (gigi==2){
		 // kecepatan-=p;
        	if(kecepatan<60){
			kecepatan=60;
            			
					
		}
	}
		 if (gigi==1){
		 // kecepatan-=p;
        	if(kecepatan<=0){
        kecepatan=0;
        	//if (kecepatan<=0){
        	//cout<<"kecepatan berhenti\n";
        	//cout<<"Netralkan gigi\n";
        
        	if(gigi==0){
        	
        }
        
						
	
	}
            
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
            	
           if(mesin==false){
           	kecepatan=0;
           	
				 
        } 
        
			
			if ( gigi==0){
            	
            	kecepatan=0;
       }
   
   
           
		   
		  if (gigi==1){
		 // kecepatan-=p;
        	if(kecepatan>60){
			kecepatan=60;
            		
						
		}
			}
		 if (gigi==2){
		 // kecepatan-=p;
        	if(kecepatan>100){
        		kecepatan=100;
			
            		
		}
			}
			 if (gigi==3){
		 // kecepatan-=p;
        	if(kecepatan>140){
			kecepatan=140;
            			
						
					
		}
	}
	 	if (gigi==4){
		 // kecepatan-=p;
        	if(kecepatan>180){
			kecepatan=180;
            		
					
		}
}
	 if (gigi==5){
		 // kecepatan-=p;
        	if(kecepatan>220){
			kecepatan=220;
            		
					
		}
}
 	if (gigi==6){
		 // kecepatan-=p;
        	if(kecepatan>260){
			kecepatan=260;
            			
						
					
		}
	}
		 if (gigi==7){
		 // kecepatan-=p;
        	if(kecepatan>maksimum){
        		kecepatan=300;
        
			kecepatan==maksimum;
    
		
	}
	
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
         system("cls");
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
                civic.Gas(p);
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

