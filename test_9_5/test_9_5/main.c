#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <string.h>
#include <ctype.h>

//islower �������жϲ����Ƿ���Сд��ĸ��
//�����Сд��ĸ���ط�0��ֵ
//�������Сд��ĸ����0

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

//дһ�����룬���ַ����е�Сд��ĸת��д�������ַ����䡣

//'a' 97
//'A' 65
//'b' 98
//'B' 66
//int main() {
//	//�����ַ���
//	//����С��ĸת����ĸ
//	char str[] = "i am a student";
//	size_t len = strlen(str);//14(0~13)
//	size_t i =0;
//	for (i = 0; i < len;i++) {
//		if (islower(str[i])) 
//		{
//          //ת��д
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

//�ݹ鷽ʽʵ��strlen
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

//ģ��ʵ��strcpy
//�����Ĺ��ܣ������ַ���
//ע�����
//1. Դ�ַ����б������\0��ͬʱ\0Ҳ�ᱻ������Ŀ��ռ�
//2. ����Ա�Լ�Ҫ��֤Ŀ��ռ�Ҫ�㹻���ܷŵ��¿�����������
//3. ��֤Ŀ��ռ��������޸�


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
//    //��ʽ����
//    printf("%s\n", my_strcpy(arr2, arr1));
//
//    return 0;
//}

//ģ��ʵ��strcat
//1. Ŀ��ռ��е���\0(�����￪ʼ׷��)��Դͷ�ַ����е���\0��׷�ӵ�ʲôʱ�������
//2. Ŀ��ռ�Ҫ�㹻��Ŀ��Ҫ�����޸�


//char* my_strcat(char* dest, const char* src) {
//    char* ret = dest;
//    assert(dest && src);
//
////     �ҵ�Ŀ��ռ��е� \0
//    while (*dest != '\0') {
//        dest++;
//    }
//
////     ��������
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


