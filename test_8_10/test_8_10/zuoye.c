#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}



//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组
//void printArray(int* arr, int sz) {
//    for (int i = 0; i < sz; i++) {
//        printf("%d ", *(arr + i));
//    }
//    printf("\n");
//}
//
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    printArray(arr, sz);
//
//    return 0;
//}


//冒泡排序
//void bubble_sort(int arr[], int sz)//参数接收数组元素个数
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这⼀趟已经有序了
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//冒泡排序（正确）
//void bubble_sort(int arr[],int sz) {
//	for (int i = 0; i < sz - 1;i++) {
//		int flag = 1;
//		for (int j = 0; j < sz -i- 1;j++) {
//			if (arr[j]>arr[j+1]) {
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			
//			}
//		
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main() {
//	int arr[] = {64,34,58,22,6,4,20,39,15,3};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz;i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分


//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//void adjustArray(int arr[],int sz) {
//	int left = 0;
//	int right = sz - 1;
//    while (left < right) {
//        while (left < right && arr[left] % 2 != 0) {
//            left++;
//        }
//        while (left < right && arr[right] % 2 == 0) {
//            right--;
//        }
//
//        if (left < right) {
//            swap(&arr[left], &arr[right]);
//        }
//    }
//}
//
//int main() {
//	int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	adjustArray(arr, sz);
//    for (int i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//
//	return 0;
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

#include<string.h>
//
//int isRotation(const char *s1, const char *s2) {
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2) {
//		return 0;
//	}
//	strncat(s1, s1, len1);
//	char* ret = strstr(s1, s2);
//	if (ret == NULL) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
//
//int main() {
//	const char *s1 = "AABCD";
//	const char *s2 = "BCDAA";
//	if (isRotation(s1, s2)) {
//		printf("s2是s1旋转后的字符串.\n");
//	}
//	else {
//		printf("s2不是s1旋转后的字符串.\n");
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int compare(char str1[], char str2[])
{
	int len = strlen(str1);
	for (int j = 1; j <= len; j++)
	{
		int tmp = str1[0];
		for (int i = 0; i < len - 1; i++)
		{
			str1[i] = str1[i + 1];
		}
		str1[len - 1] = tmp;
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	if (compare(s1, s2) == 1 )
	{
		printf("s1为s2旋转后的字符串.\n");
	}
	else
	{
		printf("s1不是s2旋转后的字符串.\n");
	}
	return 0;
}
