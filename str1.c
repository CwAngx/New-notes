#include<string.h>
#include<stdio.h>
int main()
{
	char str1[10]= "abcd";
	char str2[10] = "bc";
	//strcat(str1,str1); error ��Ϊ������ҪѰ�� \0 ��ִ�У�strncat����
	strncat(str1,str1,4);
	char * ret=strstr(str1,str2);//str���ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ��������Ӵ��ĵ�ַ
	printf("%c\n",*ret);
	printf("%s\n",str1);
	return 0;
}