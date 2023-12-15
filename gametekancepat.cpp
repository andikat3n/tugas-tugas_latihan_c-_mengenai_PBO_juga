#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
char map[50][50];
char player= '0';
char player2='1';
int x=18;
int y=2;

int x2=18;
int y2=6;

char walk;
void generateMap(){
	
	cout<<"=======finish======";
	for (int i=0; i<20;i++){
		for(int j=0; j<20;j++){
			map[i][j]= ' ';
		}
	}
	map[x][y]= player;
	map[x2][y2]= player2;
}
 void printMap(){
 	for (int i=0;i<20;i++){
 		for(int j=0; j<20;j++){
		 
		 printf("%c", map[i][j]);	
	 }
	 printf("\n");
 }
}


int main(){
	
	do{
	system("cls");
	generateMap();
	printMap();
	walk= getch();
	
	switch(walk)
	{
		case 'a': case'A':
		if(map [x-1][y]==' '){
			x--;
			map[x+1][y]=' ';
			map[x][y]=player;
		 
		}case 'o': case 'O':
		if(map [x2-1][y2]==' '){
		x2--;
		map[x2+1][y2]=' ';
		map[x2][y2]=player2;
		} 

}
	
	}while(y<20000);
	
	
	
	getchar();
	return 0;
	
}
