#include <iostream>


using namespace std;

int main(){
	int a,b;
	
	cout<<"Input nilai a: ";
	cin>>a;
	cout<<"Input nilai b: ";
	cin>>b;
	
	for (int i=0;i<a;i++){
		
		for (int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<"*"<<endl;
	}	
}
