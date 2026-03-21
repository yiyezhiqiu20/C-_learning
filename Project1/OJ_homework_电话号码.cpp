#include<stdio.h>
#define N 11
#define M 6	
int main()
{
    char a[N];
	int i ;
	for (i = 0; i < N ; i++)
	{
		scanf_s("%c", &a[i], 1);
	}
	char b[M];
	b[0] = '6';
	int j=6;
	for(i=1; i <M; i++)
	{
		b[i] = a[j];
		j++;
	}
	for(i=0;i<6;i++)
	{
		printf("%c", b[i]);
	}
	return 0;
}