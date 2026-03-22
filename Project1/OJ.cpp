#include<stdio.h>
#define M 100
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{ 
	int n;
	scanf("%d", &n);
	int i,a[M];
	for (i = 0; i < n; i++)
		scanf("%d", a);
//输入数据
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			break;
		int j;
		for(j=3;j<sqrt(a[i]);j++)
		{
			if (a[i] % j == 0)
				break;
		}
		if(j >= sqrt(a[i]))
			//开始求反位数
		{
			int sum = 0, k = a[i];
			while (k)
			{
				sum = sum * 10 + k % 10;
				k /= 10;
			}
			if (sum % 2 == 0)
			{
				printf("%d ", 0);
				break;
			}
			int j;
			for (j = 3; j < sqrt(a[i]); j++)
			{
				if (sum % j == 0)
				{
					printf("%d ", 0);
					break;
				}
			}
			if (j >= sqrt(a[i]))
				printf("%d ", 1);
		}
	}
	return 0;
}