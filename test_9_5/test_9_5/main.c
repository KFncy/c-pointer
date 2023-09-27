#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <string.h>
#include <ctype.h>

//islower 是用来判断参数是否是小写字母的
//如果是小写字母返回非0的值
//如果不是小写字母返回0

//int main() {
//	int ret = islower('Q');
//	printf("%d\n",ret);
//	return 0;
//}

//int main() {
//	int ret = isdigit('w');
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {
//	int i = 0;	
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i]){
//		c = str[i];
//		if (islower(c))
//			c = toupper(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}

//写一个代码，将字符串中的小写字母转大写，其他字符不变。

//'a' 97
//'A' 65
//'b' 98
//'B' 66
//int main() {
//	//遍历字符串
//	//发现小字母转大字母
//	char str[] = "i am a student";
//	size_t len = strlen(str);//14(0~13)
//	size_t i =0;
//	for (i = 0; i < len;i++) {
//		if (islower(str[i])) 
//		{
//          //转大写
//			str[i] = toupper(str[i]);
//		}
//	}
//	printf("%s\n", str);
//
//	return 0;
//}

//int main() {
//	char ch = 0;
//	scanf("%c", &ch);//A
//	ch = tolower(ch);
//
//	printf("%c\n", ch);//a
//
//
//	return 0;
//}

#include <assert.h>

//递归方式实现strlen
//size_t my_strlen(const char* str) {
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//
//}
//int main() {
//	char arr[] = "abc";
//	size_t len = my_strlen(arr);
//	printf("%zd\n",len);
//
//
//	return 0;
//}

//模拟实现strcpy
//函数的功能：拷贝字符串
//注意事项：
//1. 源字符串中必须包含\0，同时\0也会被拷贝到目标空间
//2. 程序员自己要保证目标空间要足够大，能放得下拷贝来的数据
//3. 保证目标空间必须可以修改


//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src) {
//    char* ret = dest;
//    assert(dest);
//    assert(src);
//
//    while ((*dest++ = *src++))
//    {
//        ;
//    }
//    return ret;
//}
//
//int main() {
//    char arr1[] = "abcdef";
//    char arr2[20] = { 0 };
//    //链式访问
//    printf("%s\n", my_strcpy(arr2, arr1));
//
//    return 0;
//}

//模拟实现strcat
//1. 目标空间中得有\0(从哪里开始追加)，源头字符串中得有\0（追加到什么时候结束）
//2. 目标空间要足够大，目标要可以修改


//char* my_strcat(char* dest, const char* src) {
//    char* ret = dest;
//    assert(dest && src);
//
////     找到目标空间中的 \0
//    while (*dest != '\0') {
//        dest++;
//    }
//
////     拷贝数据
//    while (*dest++ = *src++)
//    {
//        ;
//    }
//    return ret;
//}
//
//int main() {
//    char arr1[20] = "hello ";
//    my_strcat(arr1, arr1);
//    printf("%s\n", arr1);
//
//    return 0;
//}


char* my_stract(char* dest,const char* src){
    char* ret = dest;
    assert(dest && src);
    while (*dest != '\0') {
        dest++;
    }

    while (*dest++ = *src++) {
        ;
    }
    return ret;
}
int main() {
    char arr1[20] = "hello ";
    my_strcat(arr1,arr1);
    printf("%s\n",arr1);


    return 0;
}


