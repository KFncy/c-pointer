#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//
//要求：时间复杂度小于O(N);
//int searchMatrix(int matrix[3][5], int k, int* pr, int* pc)
//{
//	int x = 0;
//	int y = *pc - 1;
//	while (x <= *pr - 1 && y >= 0)
//	{
//		if (matrix[x][y] > k)//列
//		{
//			y--;
//		}
//		else if (matrix[x][y] < k)//行
//		{
//			x++;
//		}
//		else
//		{
//			*pr = x;
//			*pc = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main() {
//	int matrix[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//	int k = 0;
//	scanf("%d", &k);
//	int rows = 4;
//	int cols = 4;
//	int target = 6;
//	if (searchMatrix(matrix,k,&rows,&cols) == 1)
//	{
//		printf("找到了\n");
//		printf("下标为：%d,%d", rows, cols);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。


//int main()
//{
//	char murderer = 'A'; //指示凶手
//	for (murderer = 'A'; murderer <= 'D'; murderer++)
//	{
//		if ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D') == 3)
//		{
//			break;
//		}
//	}
//	printf("凶手是:%c", murderer);
//	return 0;
//}
//

//杨辉三角
int main() {
    int numRows;

    printf("输入行数: ");
    scanf("%d", &numRows);

    for (int i = 0; i < numRows; i++) {
        int n = 1;

        //空格
        for (int space = 0; space < numRows - i; space++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", n);
            n = n * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}


