#include<iostream>
#include<Windows.h>

using namespace std;
inline void escape()
{
	system("cls");
	gotoxy(30, 9);
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
	Sleep(40);
	gotoxy(30, 10);
	cout << "*                       THANKS FOR PLAYING OUR GAME.                      *";
	Sleep(40);
	gotoxy(30, 11);
	cout << "*     IT'S STILL IN DEVELOPING SO IF ANY ERROR OCCUR PLEASE FORGIVE US.   *";
	Sleep(40);
	gotoxy(30, 12);
	cout << "*             HOPE THAT YOU HAD FUN AND WILL BE BACK SOON.                *";
	Sleep(40);
	gotoxy(30, 13);
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
	gotoxy(15, 25);
	cout << "FROM UIT - CS106.K21.KHCL: DANG HOANG MINH, NGUYEN THANH DIEN, VU GIA BAO.";
	Sleep(3000);
	ExitProcess(0);
}
