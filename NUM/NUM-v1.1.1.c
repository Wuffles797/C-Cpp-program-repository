#include <stdio.h>
int gcd (long long, long long);
int gmd (long long, long long);
int main (void)
{
	long long range;
	long long berange;
	long long result;
	long long result2;
	int change;
	int main_change;
	long long berangeo;
	printf("plz enter the change-o 1=toge 0=bige\n");
	scanf("%d", &change);
	if (change == 0)
	{
		do
		{
			scanf("%lld", &range);
			scanf("%lld", &berange);
			result = gcd(range, berange);
			printf(" NUM crossed: %lld \n", result);
			printf("\n");
		}while (2 == 2);
	} else
	{
		do
		{

			printf("this is a new feature of this verison, it may have bugs.\n");
			scanf("%lld", &range);
			scanf("%lld", &berange);
			main_change = range * berange;
			do
			{
				result2 = gmd(range, berange);
				berangeo = main_change / berange;
				printf(" NUM crossed: %lld \n", berangeo);
				printf("\n");
				break;
			} while (2 == 2);
		} while (2 == 2);
	}
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
int gmd (long long range, long long berange)
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
	} while (rangeo != 0);
	return berange;
}
