#include <iostream>
#include <conio.h>
#include <string.h>



using namespace std;

class mobilmanual{

	private: 
	char merek[15];
    char model[15];
    char warna[15];
    char nopolisi[15];
    bool mesin;
    int kecepatan;
    int maksimum;
    int gigi;
		
	
	//contructor	
	public:
	mobilmanual civic (string inputmerek, string inputmodel,string inputwarna, string inputnopolisi)
		{
		mobilmanual::merek=inputmerek;
		mobilmanual::model=inputmodel;
		mobilmanual::warna=inputwarna;
		mobilmanual::nopolisi=inputnopolisi;
		
		
		}
		int main ()
		{
			mobilmanual civic = mobilmanual("Honda","Civic Turbo","Merah","BK 1 AA");
		cout<<civic.merek<<endl;
		cout<<civic.model<<endl;
		cout<<civic.warna<<endl;
		cout<<civic.nopolisi<<endl;
		}
	};
	
	
