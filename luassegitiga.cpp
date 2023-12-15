#include <iostream>

using namespace std;

int main(){
	
	float alas, tinggi, luas;
	 
	cout<<"masukan alas segitiga : ";
	cin>>alas;
	cout<<"masukan tiggi segitiga : ";
	cin>>tinggi;
	
	luas=  alas*tinggi * 1/2;
	
	cout<<"luas segitiga adalah : "<<luas<<" dengan nilai alas "<<alas<<" dan nilai tinggi "<<tinggi;
	return 0;
}
