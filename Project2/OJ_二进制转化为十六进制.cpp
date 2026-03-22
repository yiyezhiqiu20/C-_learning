#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define M 200001
int main()
{
	char b[M];
	scanf("%s", b);
	//先转化为十进制
	//它一定有零，我怎么能计算它有多少字符串呢？
	//所以我先把它转化为十进制，看看它有多少位数
	//怎么转？
	int len = 0;
	while(b[len])
		len++;
	int sum = 0;
	for(int i = 0; i < len; i++)
		sum = sum * 2 + b[i] - '0';
	//转化为十六进制
	char ans[M];
	int cnt = 0;
	while(sum)
	{
		int t = sum % 16;
		if(t < 10)
			ans[cnt++] = t + '0';
		else
			ans[cnt++] = t - 10 + 'A';
		sum /= 16;
	}
	//反转输出
	for(int i = cnt - 1; i >= 0; i--)
		printf("%c", ans[i]);
	return 0;
}