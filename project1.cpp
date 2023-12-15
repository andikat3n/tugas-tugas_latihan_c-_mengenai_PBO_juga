#include <iostream>
using namespace std;

int main()

{
	
	int n;
	string nama;

	cout<< "input angka hari : ";
	cin>>n;
	
	
	if (n==1)
	nama="senin";
	else if (n==2)
	nama="selasa";
	else if (n==3)
	nama="rabu";
	else if (n==4)
	nama="kamis";
	else if (n==5)
	nama="jumat";
	else if (n==6)
	nama="sabtu";
	else if (n==7)
	nama="minggu";
	
	cout<<"nama hari : " <<nama;
}
 

