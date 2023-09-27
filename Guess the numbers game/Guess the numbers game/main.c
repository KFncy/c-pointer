#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void game() {
	int r = rand() % 10 + 1;
	int guess = 0;
	int count = 5;
	while (1) {
		printf("\n你还有%d次机会\n", count);
		printf("请猜数字>:");
		scanf("%d",&guess);
		if (guess<r) {
			printf("猜小了");
		}
		else if (guess>r) {
			printf("猜大了");
		}
		else {
			printf("恭喜你，猜对了");
			break;
		}
		count--;
	}
	if (count == 0) {
		printf("你失败了，正确的值是：%d\n",r);
	}
}

void menu() {
	printf("***********************\n");
	printf("****** 1. play ******\n");
	printf("****** 0. exit ******\n");
	printf("***********************\n");
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}