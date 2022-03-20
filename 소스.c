#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//좌표 설정
/*
void Move(int x, int y)
{
	COORD position = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
*/

int main()
{
	//난수
	/*
	int value = 0;

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		value = rand() % 10 + 1;
		printf("%d\n", value);
	}
	*/
	
	//중복되지 않는 난수
	/*
	int array[10] = { 0, };
	
	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 10 + 1;
	
		for (int j = 0; j < i; j++)
		{
			if (array[j] == array[i])
			{
				i--;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", array[i]);
	}
	*/
	
	//파일 쓰기
	/*
	FILE * file = fopen("file.txt", "w");

	fputs("file\n", file);
	fputs("1000 won\n", file);
	
	fclose(file);
	*/

	//파일 읽기
	/*
	char buffer[10000] = { 0, };

	FILE * file = fopen("cat.txt", "r");

	fread(buffer, sizeof(buffer), 1, file);

	printf("%s", buffer);

	fclose(file);
	*/

	//좌표 이동
	/*
	int x = 5;
	int y = 5;

	while (1)
	{
		if (GetAsyncKeyState(VK_UP))
		{
			y--;
		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			y++;
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			x--;
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			x++;
		}
		
		system("cls");
		Move(x, y);
		printf("☆");
	}
	*/


	return 0;
}