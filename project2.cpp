#include <iostream>
using namespace std;

int main()

{
	
	int n;
	string nama;

	cout<< "input angka hari : ";
	cin>>n;
	
	switch (n){
		case 1 : nama="senin"; break;
		case 2 : nama="selasa"; break;
		case 3 : nama="rabu"; break;
		case 4 : nama="kamis"; break;
		case 5 : nama="jumat"; break;
		case 6 : nama="sabtu"; break;
		case 7 : nama="minggu"; break;
	}
	cout<<"nama hari : "<<nama;

}
