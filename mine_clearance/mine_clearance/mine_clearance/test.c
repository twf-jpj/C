#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"


void menu(void)
{
	printf("***************************\n\r");
	printf("*********** 1.play ********\n\r");
	printf("*********** 0.exit ********\n\r");
	printf("***************************\n\r");
}

void game(void)
{
	//雷的信息存储
	//1.布置的雷
	char mine[ROWS][COLS]={'0'};//11*11
	//2.排查的雷
	char show[ROWS][COLS]={'0'};
	//初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);
	//放置雷
	SteMine(mine,ROW,COL);
	//DisplayBoard(mine,ROW,COL);
	//扫雷
	FindMine(mine,show,ROW,COL);

}

void test(void)
{
	int input=0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\r\n");
			break;
		default:
			printf("选择错误请，重新选择\r\n");
			break;
		}
	}while(input);
}




int main()
{
	test();
	return 0;
}



