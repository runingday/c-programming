//有50个台阶，一次可以走一步或者两步
//问，走完50个台阶，有多少个走法

//1个台阶   1
//2个台阶  11  2
//3个台阶 111  12 21
//4个台阶 1111 22 112 211 121
//5个台阶 8
//6个台阶 13
//7个台阶 21
//8个台阶 34
//9个台阶 55
//10个台阶 89
#include<stdio.h>
#include<stdlib.h>

int go(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return go(n - 2) + go(n - 1);
	}
}

int main()
{
	printf("%d", go(10));
	return 0;

}
