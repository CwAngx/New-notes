//���Ͼ������Ԫ��
#include<stdio.h>
int Fundnum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py-1;
	while (x <= *px && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 8;//ҪѰ�ҵ�Ԫ��
	int x = 3;
	int y = 3;
	int r = Fundnum(arr,k,&x,&y);//��ַ�������ں����ڲ��޸�ֵ�����������ӡ����
	if (r == 0)
	{
		printf("û�ҵ�");
	}
	else
	{
		printf("�ҵ��ˣ�������%d %d\n",x,y);
	}
	return 0;
}