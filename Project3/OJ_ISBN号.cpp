#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 14
int main()
{ 
	int T;
	//我输入不只有一个数组吗？我觉得这把得用指针
	int* p = 0;
	int a(*p)[N] = 0;
	scanf("%d", &T);
	int i;
	for (p= 0; *p < T; p++)
		for(i=0; i < N; i++)
			fgets( [p][i]);
	//针对每个数组进行处理
	//逐个输出，那么就得用两层循环了
	//但是，这个连字符怎么处理？
	for (*p= 0; *p< T; p++)
	{
		for(i=0; i < N; i++)
		{
			if ( [p][i] == '-')
				continue;
			else
				printf("%c", [p][i]);
		}
	}
}