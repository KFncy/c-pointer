#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//qsort使⽤举例

//int int_cmp(const void *p1,const void *p2) {
//	return (*(int *)p1- *(int *)p2);
//}
//int main() {
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(int),int_cmp);
//
//	for (int i = 0; i < sz; i++) {
//		printf("%d ",arr[i]);
//	
//	}
//	printf("\n");
//	return 0;
//}

//模拟实现qsort
//int int_cmp(const void* p1, const void* p2) {
//	return (*(int*)p1 - *(int*)p2);
//
//}
//
//void _swap(void* p1,void* p2,int size) {
//	for (int i = 0; i < size;i++) {
//		char tmp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	
//	}
//}
//
//void bubble(void* base, int count, int size, int (*cmp)(const void*, const void*)) {
//	for (int i = 0; i < count - 1; i++) {
//		for (int j = 0; j < count - i - 1; j++) {
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0) {
//				_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr,sz,sizeof(int),int_cmp);
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}



//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.

//void findSingleNumbers(int arr[], int sz, int* n1, int* n2) {
//	int r = 0;
//	for (int i = 0; i < sz;i++) {
//		r ^= arr[i];
//		}
//	
//	int right = r & -r;
//	*n1 = 0;
//	*n2 = 0;
//	
//	for (int i = 0; i < sz; i++) {
//		if (arr[i] & right) {
//			*n1 ^= arr[i];
//		}
//		else {
//			*n2 ^= arr[i];
//		}
//	}
//}
//
//int main() {
//	int arr[] = {1,2,3,4,5,1,2,3,4,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n1, n2;
//	findSingleNumbers(arr,sz,&n1,&n2);
//	printf("这两个单身狗是：%d 和 %d",n1,n2);
//	
//	return 0;
//}


//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述：
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。


///*闰年366天，平年365天。一年十二月，除了二月，闰年（年份除以4得整数）29天，
//非闰年28天，其他月份天数固定 一月 固定 31天 二月 固定 （闰年29天，非闰年28天）
//三月 固定 31天 四月 固定 30天 五月 固定 31天 六月 固定 30天 七月 固定 31天
//八月 固定
//31天 九月 固定 30天 十月 固定 31天 十一月 固定 30天 十二月 固定 31天 第一
//季度（一月、二月、三月）
//闰年91天，非闰年90天 第二季度（四月、五月、六月）固定91天
//第三季度（七月、八月、九月）固定92天 第四季度（十月、十一月、十二月）固定92天 * /
// 
//void day_count(int year, int month) {
//    //闰年
//    int leap[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//    //平年
//    int common[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//    int day = 0;
//    if (year % 4 == 0) {
//        day = leap[month - 1];
//        printf("%d\n", day);
//    }
//    else {
//
//        day = common[month - 1];
//        printf("%d\n", day);
//    }
//}
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        day_count(a, b);
//    }
//    return 0;
//}

//8.16
//模仿qsort的功能实现一个通用的冒泡排序
#include <stdio.h>
#include <string.h>

int int_cmp(const void* p1, const void* p2) {
	return (*(int*)p1 - *(int*)p2);
}

int str_cmp(const void* p1, const void* p2) {
	return strcmp(*(const char**)p1, *(const char**)p2);
}

void _swap(void* p1, void* p2, int size) {
	for (int i = 0; i < size; i++) {
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

void bubble_sort(void* base, int count, int size, int (*cmp)(const void*, const void*)) {
	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			void* elem1 = (char*)base + j * size;
			void* elem2 = (char*)base + (j + 1) * size;

			if (cmp(elem1, elem2) > 0) {
				_swap(elem1, elem2, size);
			}
		}
	}
}

int main() {
	int int_arr[] = {5,2,1,7,9};
	bubble_sort(int_arr, sizeof(int_arr) / sizeof(int_arr[0]), sizeof(int), int_cmp);


	for (int i = 0; i < sizeof(int_arr) / sizeof(int_arr[0]); i++) {
		printf("%d ", int_arr[i]);
	}
	printf("\n");

	const char* str_arr[] = { "apple", "banana", "grape", "orange", "pear" };
	bubble_sort(str_arr, sizeof(str_arr) / sizeof(str_arr[0]), sizeof(const char*), str_cmp);

	for (int i = 0; i < sizeof(str_arr) / sizeof(str_arr[0]); i++) {
		printf("%s ", str_arr[i]);
	}
	printf("\n");

	return 0;
}