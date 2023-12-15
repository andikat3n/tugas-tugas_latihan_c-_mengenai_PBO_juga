#include <iostream>
#include <string.h>
#include <conio.h>

//using namespace std;

class  kendaraan{
	protected:
		short jlhroda, arah, kecepatan;
		
		private:
			void jalankan(int p){
				kecepatan +=p;
			}
		public:
			void rem(int p){
				kecepatan -=p;
				if (kecepatan <0) kecepatan=0;
			}
		};
	
	class sepeda: public kendaraan {
		
		protected:
			char merek[16], warna[16];
			
		public:
			sepeda(){
				strcpy{merek, "BMx"};
				strcpy{warna, "merah"};
				jlhroda=2;
				arah=kecepatan=0;
			}
			void gas (short p); //abstrack method
			
			private:
				void dayung (int p){
					kecepatan +=p;
				}
	};	
	
	class spdmtr: public sepeda{
		
		protected:
		bool mesin;
		short maksimum;
		
		public:
		spdmtr(){
			strcpy{merek, "honda"};
			strcpy{warna, "biru"};
			mesin=false;
			maksimum=120;
			
			
		}	
		
		void hidupkan(){
			mesin =true;
		}
		void padamkan(){
			mesin= false;
		}
		
		void gas(short p){ //overloading a abstark method
			
		if(mesin=true){
			kecepatan +=p;
			if (kecepatan>maksimum) kecepatan=maksimum;
		}	
			
		}
	};	
	
		class spdmtrmanual : public spdmtr{
			
			protected:
				short gigi;
				
			public:
				void gas(short p) {
					if (mesin && gigi>0)
					kecepatan+=p;
					switch (gigi){
						case 1: if (kecepatan>25) kecepatan=25; break;
						case 2: if (kecepatan>50) kecepatan=50; break;
						case 3: if (kecepatan>75) kecepatan=75; break;
						case 4: if (kecepatan>maksimum) kecepatan=maksimum; break;
						
					}
				}
					
		};
		void main(){
			spdmtr :honda;
		}
	
};
