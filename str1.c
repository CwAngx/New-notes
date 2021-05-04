#include<string.h>
#include<stdio.h>
int main()
{
	char str1[10]= "abcd";
	char str2[10] = "bc";
	//strcat(str1,str1); error 因为函数是要寻找 \0 来执行，strncat不用
	strncat(str1,str1,4);
	char * ret=strstr(str1,str2);//str是判断str2指向的字符串是否是str1指向的字符串的子串，返回子串的地址
	printf("%c\n",*ret);
	printf("%s\n",str1);
	return 0;
}