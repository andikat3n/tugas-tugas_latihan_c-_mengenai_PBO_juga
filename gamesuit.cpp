#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	
	
	int lagi, pilih;
	
		
	a: cout<<"==================="<<endl;
	cout<<"game suit semut gajah"<<endl;
	cout<<"======================"<<endl;
	cout<<" 1.Gajah\n 2.semut\n 3.orang"<<"\n"<<endl;
	cout<<"Silahkan pilih 1/2/3 : ";
	cin>>pilih;
	
	if(pilih==1){
	
	cout<<"pilhan anda => Gajah"<<endl;
	srand(time(NULL));
	int com=rand()%10;
	if (com<=3 && com>=1){
	cout<<"computer => Gajah"<<"\n"<<endl;
	cout<<"============="<<endl;
	cout<<"==> Seri ! <==="<<endl;
	cout<<"============="<<endl;
	}
	else if(com<=6 && com>=4){
	cout<<"computer => Orang"<<"\n";
	cout<<"============"<<endl;
	cout<<"==> Menang !<==="<<endl;
	cout<<"=============="<<endl;
	}
	else{
	cout<<"computer => Semut"<<"\n";
	cout<<"============"<<endl;
	cout<<"==> Kalah !<==="<<endl;
	cout<<"=============="<<endl;	
	}
	cout<<endl;
}
	 else if(pilih==2){
	
	cout<<"pilhan anda => Semut"<<endl;
	srand(time(NULL));
	int com=rand()%10;
	if (com<=3 && com>=1){
	cout<<"computer => Semut"<<"\n";
	cout<<"============="<<endl;
	cout<<"==> Seri ! <==="<<endl;
	cout<<"============="<<endl;
}
	else if(com<=6 && com>=4){
	cout<<"computer => Gajah"<<"\n";
	cout<<"============"<<endl;
	cout<<"==> Menang !<==="<<endl;
	cout<<"=============="<<endl;
}
	else{
	cout<<"computer => Orang"<<"\n";
	cout<<"============"<<endl;
	cout<<"==> Kalah !<==="<<endl;
	cout<<"=============="<<endl;	
	}
	cout<<endl;
}
	else if(pilih==3){
	cout<<"pilhan anda => Orang"<<endl;
	srand(time(NULL));
	int com=rand()%10;
	if (com<=3 && com>=1){
	cout<<"computer => Orang"<<"\n";
	cout<<"============="<<endl;
	cout<<"==> Seri ! <==="<<endl;
	cout<<"============="<<endl;
}
	else if(com<=6 && com>=4){
	cout<<"computer => Semut"<<"\n";
	cout<<"============"<<endl;
	cout<<"==> Menang !<==="<<endl;
	cout<<"=============="<<endl;
}
	else{
	cout<<"computer => Gajah"<<"\n";
	cout<<"============"<<endl;
	cout<<"==> Kalah !<==="<<endl;
	cout<<"=============="<<endl;	
	}
	cout<<endl;
}

}
	










	
	

