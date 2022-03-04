void about()
{
	system("cls");
	gotoxy(15, 2);
	cout << "* * * * * * * * * * * * * * * * * * * *";
	gotoxy(15, 3);
	cout << "*               ABOUT US:             *";
	gotoxy(15, 4);
	cout << "*         UIT - CS106.K21.KHCL:       *";
	gotoxy(15, 5);
	cout << "*   1. Dang Hoang Minh   <18520311>   *";
	gotoxy(15, 6);
	cout << "*   2. Nguyen Thanh Dien <18520600>   *";
	gotoxy(15, 7);
	cout << "*   3. Vu Gia Bao        <18120504>   *";
	gotoxy(15, 8);
	cout << "* * * * * * * * * * * * * * * * * * * *";
	gotoxy(10, 9);
	cout << "\t    THANKS FOR PLAYING OUR GAME!! \n\n";
}
/*
gotoxy(x,y) có tác dụng di chuyển vị trí con trỏ đến toa độ cột thứ x và hàng thứ y
x nằm trong khoảng 1-> 80
y nằm trong khoảng 1 -> 25
*/