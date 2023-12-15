#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define n 10

using namespace std;

int main()
{
	int data [n], i,r, tmp;
	
	srand(time(0));
//	for(i=0;i<n;i++){
//		cout<<"masukan data ke-" <<i<<": ";
//		cin>>data [i];
	cout<<"data sebelum diurutkan: ";
	
	for(i=0;i<n;i++){
		data[i]=rand ()%100;
		cout<<data[i]<<" ";
		
	
		
	
	
	
	}
	
		for(r=0;r<=n-2;r++)
		for(i=r+1;i<n;i++)
		if(data[r]>data[i]){
			tmp=data[r];
			data[r]=data[i];
			data[i]=tmp;
		}
	cout<<"\n data sesudah diurutkan: ";
	for(i=0;i<n;i++)
	cout<<data[i]<<" ";
		
}
