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
//	printf("ֻ����һ�ε������ǣ�%d\n", singleNumber);
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
//    printf("����������: ");
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
//    printf("ż��λ: ");
//    printBinarySequence(evenBits);
//
//    printf("����λ: ");
//    printBinarySequence(oddBits);
//}
//
//int main() {
//    unsigned int num;
//    printf("����һ������: ");
//    scanf("%u", &num);
//
//    printBinarySequence(num);
//    printEvenAndOddBits(num);
//
//    return 0;
//}


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int Temp = 0;
	int count = 0;
	printf("���������������Ƚ����Ƕ������벻ͬλ�ĸ�����\n");
	scanf("%d %d", &num1, &num2);
	Temp = num1 ^ num2;
	while (Temp != 0)
	{
		count++;
		Temp = Temp & (Temp - 1);
	}
	printf("�������벻ͬλ�ĸ���Ϊ��%d\n", count);
	return 0;
}