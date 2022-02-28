#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition (hcon,dwPos);
}
int main(){
	int x=0 , y=0;
	char cursor;
	while(cursor!=27)
	{
		cursor=getch();
		system("cls");
		if(cursor=='a')
		x--;
		if(cursor=='d')x++;
		if(cursor=='w')y--;
		if(cursor=='s')y++;
		gotoxy(x,y);
		printf("*");
	}
	return 0;
}

