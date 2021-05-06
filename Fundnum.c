//杨氏矩阵查找元素
#include<stdio.h>
int Fundnum(int arr[3][3], int k, int* px, int* py)
{
	assert(px != NULL);
	assert(py != NULL);//断言，检查指针是否为空
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
	int k = 8;//要寻找的元素
	int x = 3;
	int y = 3;
	int r = Fundnum(arr,k,&x,&y);//传址，可以在函数内部修改值，方便后续打印坐标
	if (r == 0)
	{
		printf("没找到");
	}
	else
	{
		printf("找到了，坐标是%d %d\n",x,y);
	}
	return 0;
}
