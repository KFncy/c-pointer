#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//Ҫ��ʱ�临�Ӷ�С��O(N);
//int searchMatrix(int matrix[3][5], int k, int* pr, int* pc)
//{
//	int x = 0;
//	int y = *pc - 1;
//	while (x <= *pr - 1 && y >= 0)
//	{
//		if (matrix[x][y] > k)//��
//		{
//			y--;
//		}
//		else if (matrix[x][y] < k)//��
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
//		printf("�ҵ���\n");
//		printf("�±�Ϊ��%d,%d", rows, cols);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�


//int main()
//{
//	char murderer = 'A'; //ָʾ����
//	for (murderer = 'A'; murderer <= 'D'; murderer++)
//	{
//		if ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D') == 3)
//		{
//			break;
//		}
//	}
//	printf("������:%c", murderer);
//	return 0;
//}
//

//�������
int main() {
    int numRows;

    printf("��������: ");
    scanf("%d", &numRows);

    for (int i = 0; i < numRows; i++) {
        int n = 1;

        //�ո�
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


