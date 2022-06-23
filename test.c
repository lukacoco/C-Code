#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	for (int n = 101; n <= 200; n++)
	{
		if (isPrime(n))
			printf("%d\n",n);
	}
}