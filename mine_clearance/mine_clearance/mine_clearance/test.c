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
	//�׵���Ϣ�洢
	//1.���õ���
	char mine[ROWS][COLS]={'0'};//11*11
	//2.�Ų����
	char show[ROWS][COLS]={'0'};
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);
	//������
	SteMine(mine,ROW,COL);
	//DisplayBoard(mine,ROW,COL);
	//ɨ��
	FindMine(mine,show,ROW,COL);

}

void test(void)
{
	int input=0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\r\n");
			break;
		default:
			printf("ѡ������룬����ѡ��\r\n");
			break;
		}
	}while(input);
}




int main()
{
	test();
	return 0;
}



