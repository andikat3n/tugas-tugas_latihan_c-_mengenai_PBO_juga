#include <iostream>
using namespace std;

int main()

{
	
	int n;
	string nama[]={"senin","selasa","rabu","kamis","jumat","sabtu","minggu"};

	cout<< "input angka hari : ";
	cin>>n;
	
	if (0<=n && n<=6)
	cout<<"hari : "<<nama[n-1];
	else 
	cout<<"nomor hari tidak ada";
}
	
	
