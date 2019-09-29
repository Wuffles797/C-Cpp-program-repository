#include <stdio.h>
int gcd (long long, long long);
int main (void)
{
	long long range;
	long long berange;
	long long result;
	scanf("%lld", &range);
	scanf("%lld", &berange);
	result = gcd(range, berange);
	printf(" NUM crossed: %lld \n", result);
	printf("\n");
	return 0;
}
int gcd (long long range, long long berange)
{
	long long rangeo;
	do
	{
		rangeo = range % berange;
		if (rangeo == 0)
		{
			break;
		}
		range = berange;
		berange = rangeo;
	} while (range != 0);
	return berange;
}
