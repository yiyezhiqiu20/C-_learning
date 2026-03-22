#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define M 16
int P(int p, int q, int r) {
	int i, j, k;
	for (i = 2; i <= M; i++)
	{
		if (p < i && q < i && r < i)
		{
			if (p * q == r)
			{
				return i;
			}
		}
	}
	return -1;
};
int main()
{
	int T;
	scanf("%d", &T);
	// 处理每个测试用例
	while (T--)
	{
		int p, q, r;
		scanf("%d %d %d", &p, &q, &r);
		//判断它能符合几进制
		int B[M];//存储符合条件的进制
		//1.判断p,q,r都符合同一个进制
		//2.判断该进制是否满足相乘条件
		//3.判断最小数
		B[T] = P(p, q, r);
		int min = B[0];
		for (int i = 1; i < T; i++)
		{
			if (B[i] != -1 && B[i] < min)
			{
				min = B[i];
			}
		}
		if (min != -1)
		{
			printf("%d\n", min);
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}
