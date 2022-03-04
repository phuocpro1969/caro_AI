#include<iostream>
using namespace std;
inline void definecharvalue(char s[100][100], int n)
{
	for (int i = 0; i < n+2; i++) s[i][0] = '*';	//  cột 0 là viền 
	for (int j = 1; j < n+1; j++)
		for (int i = 0; i < n+2; i++)
		{
			if (i == 0 || i == n+1) s[i][j] = '*';	// hàng 0 , hàng n+1 là viền in dáu *, bàn cờ in khoảng trắng
			else s[i][j] = ' ';
		}
	for (int i = 0; i < n+2; i++) s[i][n+1] = '*';	//  cột n+1 là viền
}