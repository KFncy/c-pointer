#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}������Ϊ6,12


//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}


//ģ��ʵ�ֿ⺯��strlen

//#include <assert.h>
//
//int my_strlen(const char* str) {
//	int count = 0;
//	assert(str);
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main() {
//
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}


//ʵ��һ�����������������ַ����е�k���ַ�.
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//void Leftstring(char* str, int length, int k) {
//	//ѭ��ʵ�� �ַ�����
//	for (int i = 0; i < k; i++) {
//		int n = 0;
//		//ʹ����ʱ���������һ���ַ�
//		char tmp = str[0];
//		//�������飬ʵ�ֽ���һλ��ֵ��ǰһλ
//		for (int n = 0; n < length - 1; n++) {
//			str[n] = str[n + 1];
//		}
//		str[length - 1] = tmp;
//	}
//}
//int main() {
//	char str[] = "ABCD";
//	int length = strlen(str);
//	int k = 0;
//	printf("�����������ַ��ĸ�����");
//	scanf("%d", &k);
//	printf("����ǰ��%s\n", str);
//	Leftstring(str, length, k);
//	printf("������%s\n", str);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    char Buff[100];
//    char cTmp;
//    int cnt = 0;
//
//    while (scanf("%c", &cTmp) != EOF)
//    {
//        if (cTmp != '\n')
//        {
//            Buff[cnt++] = cTmp;
//        }
//        else
//        {
//            for (int i = cnt - 1; i >= 0; i--)
//            {
//                printf("%c", Buff[i]);
//            }
//            printf("\n");
//            cnt = 0;
//        }
//
//
//
//    }
//    return 0;
//
//}
//
//#include <stdio.h>
//#include <string.h>
//
//void reverseString(char* str) {
//    int length = strlen(str);
//    for (int i = 0; i < length / 2; i++) {
//        char temp = str[i];
//        str[i] = str[length - 1 - i];
//        str[length - 1 - i] = temp;
//    }
//}
//
//int main() {
//    char input[1000];
//    printf("������һ���ַ�����");
//    fgets(input, sizeof(input), stdin);
//
//    // �Ƴ������ַ���ĩβ�Ļ��з�
//    input[strcspn(input, "\n")] = '\0';
//
//    reverseString(input);
//
//    printf("��ת����ַ�����%s\n", input);
//
//    return 0;
//}


#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    gets(str);
    int len = strlen(str);
    for (int i = len - 1; i != -1; i--)
        printf("%c", str[i]);
    return 0;
}