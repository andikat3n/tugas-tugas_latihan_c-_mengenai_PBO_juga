#include <iostream>

using namespace std;

int main(){
	
	int tinggi, lebar;
	
	cout<<"input tinggi persegi : ";
	cin>>tinggi;
	cout<<"input lebar persegi :  ";
	cin>>lebar;
	cout<<"\n";
	
	for(int i= 0; i<tinggi ; i++){
		for(int j=0; j<lebar; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
