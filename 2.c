#include<stdio.h>

//倒叙输出
void fun(int x)
{
	if (x != 0)
	{
		printf("%d", x%10);
		fun(x / 10);
		
	}
}

//猴子吃桃问题（递归方式）
//int fun1(int n)
//{
//	if (n == 10)
//		return 1;
//	else if (n<10)
//		return (fun1(n + 1) + 1) * 2;
//}

//递归输出1-10
//void fun3(int n)
//{
//	if (n > 0)
//	{
//
//	fun3(n-1);
//	printf("%d\n", n);
//	}
//}

int main()
{
	//fun3(10);//递归输出1-10
	//printf("%d", fun1(1));//递归输出猴子吃桃
	fun(12345);
	getchar();
	getchar();
	return 0;
}