#include <iostream>
#include <vector>
#include <windows.h>

#include "player.h"
#include <conio.h>

using namespace std;

void move() 
{
	
	
}
void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos)
};
void map()
{
	int map[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 0 || i == 9 || j == 0 || j == 9)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	char input;
	int x = 1;
	int y = 1;
	for (;;)
	{
		void gotoxy(int x, int y);

		input = _getch();

		if (input == 'a' || input ==  'A')
		{
			x--;
		}
		else if (input == 'd' || input == 'D')
		{
			x++;
		}
		else if (input == 'w' || input == 'W')
		{
			y--;
		}
		else if (input == 's' || input == 'S')
		{
			y++;
		}
		cout << "p";

		
	}

int main()
{

	map();


	FPlayer* player = new FPlayer();

	cout << "현재 HP : " << player->HP << endl << "현재 MP : " << player->MP;

	delete player;

	return 0;
}
