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
//}输出结果为6,12


//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}


//模拟实现库函数strlen

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


//实现一个函数，可以左旋字符串中的k个字符.
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//void Leftstring(char* str, int length, int k) {
//	//循环实现 字符左旋
//	for (int i = 0; i < k; i++) {
//		int n = 0;
//		//使用临时变量储存第一个字符
//		char tmp = str[0];
//		//遍历数组，实现将后一位赋值给前一位
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
//	printf("请输入左旋字符的个数：");
//	scanf("%d", &k);
//	printf("左旋前：%s\n", str);
//	Leftstring(str, length, k);
//	printf("左旋后：%s\n", str);
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
//    printf("请输入一个字符串：");
//    fgets(input, sizeof(input), stdin);
//
//    // 移除输入字符串末尾的换行符
//    input[strcspn(input, "\n")] = '\0';
//
//    reverseString(input);
//
//    printf("反转后的字符串：%s\n", input);
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