#include<iostream>
using namespace std;
/*
inline dùng để tối ưu hoá trình biên dịch giúp đoạn code chạy nhanh hơn
https://stackoverflow.com/questions/10998975/whats-the-difference-between-static-inline-void-and-void
*/

inline void drawplayboard(char s[100][100], int n, char player1symbol, char player2symbol)
{
	system("cls");
	TextColor(15);						// Dùng màu , số 15 dựa vào bảng màu
	for (int i = 0; i <= n+1; i++)		// 0 là viền , n+1 cũng là viền , bàn cờ từ 1 -> n
	{
		if (i < 11) cout << "  " << i;	// bàn cờ là khoảng trắng
		else cout << " " << i;
		Sleep(50);						// delay trong 50 miligiay , dùng để vẽ dấu *
	}
	cout << "\n";
	cout << "0 ";
	for (int i = 0; i < n+2; i++)		// Duyệt từng hàng một , chọn màu biểu tượng cho 2 thằng khứa kia thôi, thằng 1 thì màu đỏ , thằng 2 xanh
	{
		if (s[i][0] == player1symbol) TextColor(12);
		else if (s[i][0] == player2symbol) TextColor(11);
		cout << s[i][0] << "  ";
		Sleep(40);
		TextColor(15);
	}
	cout << "\n";
	for (int j = 1; j < n+1; j++)
	{
		cout << j;
		if (j < 10)
		{
			cout << " "; 
			for (int i = 0; i < n + 2; i++) 
			{
				if (s[i][j] == player1symbol) TextColor(12);
				else if (s[i][j] == player2symbol)TextColor(11);
				cout << s[i][j] << "  ";
				Sleep(5);
				TextColor(15);
			}
		}
		else if (j > 9) for (int i = 0; i < n+2; i++)
		{
			if (s[i][j] == player1symbol) TextColor(12);
			else if (s[i][j] == player2symbol) TextColor(11);
			cout << s[i][j] << "  ";
			Sleep(5);
			TextColor(15);
		}
		cout << "\n";
	}
	cout << n+1;
	for (int i = 0; i < n+2; i++)
	{
		if (s[i][n+1] == player1symbol) TextColor(12);
		else if (s[i][n+1] == player2symbol) TextColor(11);
		cout << s[i][n+1] << "  ";
		Sleep(40); 
		TextColor(15);
	}
	cout << "\n";
}
