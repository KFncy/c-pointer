#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int findSingleNumber(int nums[], int sz) {
//	int result = 0;
//	for (int i = 0; i < sz; i++) {
//		result ^= nums[i];
//
//	}
//	return result;
//}
//int main() {
//
//	
//
//	int nums[] = {4,1,2,1,2};
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int singleNumber = findSingleNumber(nums, sz);
//
//	printf("只出现一次的数字是：%d\n", singleNumber);
//
//	return 0;
//}

//int main()
//{
//
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}



//void printBinarySequence(unsigned int num) {
//    printf("二进制序列: ");
//    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
//        printf("%d", (num >> i) & 1);
//    }
//    printf("\n");
//}
//
//void printEvenAndOddBits(unsigned int num) {
//    unsigned int evenBits = 0;
//    unsigned int oddBits = 0;
//
//    for (int i = 0; i < sizeof(num) * 8; i++) {
//        if (i % 2 == 0) {
//            evenBits |= ((num >> i) & 1) << (i / 2);
//        }
//        else {
//            oddBits |= ((num >> i) & 1) << (i / 2);
//        }
//    }
//
//    printf("偶数位: ");
//    printBinarySequence(evenBits);
//
//    printf("奇数位: ");
//    printBinarySequence(oddBits);
//}
//
//int main() {
//    unsigned int num;
//    printf("输入一个整数: ");
//    scanf("%u", &num);
//
//    printBinarySequence(num);
//    printEvenAndOddBits(num);
//
//    return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int Temp = 0;
	int count = 0;
	printf("请输入两个数来比较他们二进制码不同位的个数：\n");
	scanf("%d %d", &num1, &num2);
	Temp = num1 ^ num2;
	while (Temp != 0)
	{
		count++;
		Temp = Temp & (Temp - 1);
	}
	printf("二进制码不同位的个数为：%d\n", count);
	return 0;
}