#include<stdio.h>

//�������
void fun(int x)
{
	if (x != 0)
	{
		printf("%d", x%10);
		fun(x / 10);
		
	}
}

//���ӳ������⣨�ݹ鷽ʽ��
//int fun1(int n)
//{
//	if (n == 10)
//		return 1;
//	else if (n<10)
//		return (fun1(n + 1) + 1) * 2;
//}

//�ݹ����1-10
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
	//fun3(10);//�ݹ����1-10
	//printf("%d", fun1(1));//�ݹ�������ӳ���
	fun(12345);
	getchar();
	getchar();
	return 0;
}