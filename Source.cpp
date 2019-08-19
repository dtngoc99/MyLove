#include<iostream>
using namespace std;
#include<string>
#include"myLib.h"
#pragma comment (lib,"winmm.lib")//cung cấp mã thực thi cho hàm chơi âm thanh

int taoSo(int a, int b);
void main()
{
	SetColor(12);
	ShowCur(false);//an con tro nhap nhay
	char arr[8][23] = {
		"    *****     *****",
		"  **      *  *     **",
		" **        **       **",
		"  **     ......    **",
		"    **            **",
		"      **        **",
		"        **    **",
		"           **"
	};
	char arr1[10][23] = {
		"    *****     *****",
		"  ********   ********",
		" ********** **********",
		" *********************",
		"  ******LoveYou******",
		"   *****************",
		"    ***************",
		"      ***********",
		"        *******",
		"          ***"
	};
	char arr3[8][33] = {
		"    *****     *****      ****",
		"  **      *  *     **  *      *",
		" **        **       ***        *",
		"  **     .......    **        *",
		"    **            **        *",
		"      **        **  *      *",
		"        **    **     *   *",
		"           **          *"
	};
	char arr4[7][12] = {
		"   **   **",
		"  **** ****",
		"  *********",
		"   *******",
		"    *****",
		"     ***",
		"      *"
	};
	char arr5[5][9] = {
		"  *   *",
		" *  *  *",
		"  *   *",
		"   ***",
		"    *"
	};

	PlaySound("Romeo-And-Juliet.wav", NULL, SND_ASYNC);
	int dem = 0;
	while (dem<70)
	{
		clrscr();
		ShowCur(false);
		int x1 = 0, y1 = 0;
		int mau = taoSo(1, 7);
		SetColor(mau);
		int x = x1;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 23; j++)
			{
				gotoXY(x++, y1);
				cout << arr[i][j];
			}
			x = x1;
			y1++;
		}
		int mau2 = taoSo(1, 7);
		SetColor(mau2);
		int x2 = taoSo(100, 200);
		int y2 = taoSo(0, 20);
		x = x2;
		ShowCur(false);
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 23; j++)
			{
				gotoXY(x++, y2);
				cout << arr1[i][j];
			}
			x = x2;
			y2++;
		}
		dem++;
	}
	char arr7[86]="Neu biet se co ngay em yeu anh nhu the, em nhat dinh se yeu anh tu cai nhin dau tien.";
	clrscr();
	SetColor(14);
	int x = 60, y = 0;
	int xt = x;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			gotoXY(xt++, y);
			cout << arr5[i][j];
		}
		xt = x;
		y++;
	}
	x = 55, y = 10;
	xt = x;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			gotoXY(xt++, y);
			cout << arr4[i][j];
		}
		xt = x;
		y++;
	}
	int mau3 = 9;
	for (int k = 0; k < 5; k++)
	{		
		int x3 = 20;
		int y3 = 0;
		x = x3;
		SetColor(mau3++);
		ShowCur(false);//an con tro nhap nhay
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 33; j++)
			{
				gotoXY(x++, y3);
				cout << arr3[i][j];
			}
			x = x3;
			y3++;
		}
		int mau2 = mau3;
		int x2 = 25,x4=45;
		int y2 = 10,y4=10;
		x = x2;
		int xx = x4;
		SetColor(mau2);
		ShowCur(false);//an con tro nhap nhay
		for (int i = 0; i < 23; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				gotoXY(x++, y2);
				cout << arr1[j][i];
				gotoXY(xx--, y4);
				cout << arr1[j][i];
			}
			Sleep(200);
			x = x2;
			xx = x4;
			y2++;
			y4++;
		}
	}
	for (int k = 0; k < 10; k++)
	{
		int x2 = 25, x4 = 45;
		int y2 = 10, y4 = 10;
		int x = x2;
		int xx = x4;
		if (k ==7)
		{
			SetColor(k + 2);
		}
		else SetColor(k + 1);
		
		ShowCur(false);
		for (int i = 0; i < 23; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				gotoXY(x++, y2);
				cout << arr1[j][i];
				gotoXY(xx--, y4);
				cout << arr1[j][i];
			}
			x = x2;
			xx = x4;
			y2++;
			y4++;
		}
		Sleep(500);
	}
	PlaySound("Piri-Dreamcatcher(1).wav", NULL, SND_ASYNC);
	x = 60, y = 9;
	int x1 = x;
	int k = 0;

	for (int i = 0; i < 86; i++)
	{
		gotoXY(x, y);
		SetColor(15);
		cout << arr7[i];
		int dem = 0;
		if (i >= 1)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (dem>40)
				{
					break;
				}
				gotoXY(x1--, y);
				cout << arr7[j];
				dem++;
			}
		}
		x1 = x;
		Sleep(200);
	}
	x = 20, y = 9;
	for (int i = 45; i < 86; i++)
	{
		gotoXY(x, y);
		cout << arr7[i];
		if (i < 85)
		{
			for (int j = i + 1; j < 86; j++)
			{
				cout << arr7[j];
			}
		}
		Sleep(200);
	}
	gotoXY(0,100);
	system("pause");
}
int taoSo(int a, int b)
{
	return rand() % (b - a + 1);
}