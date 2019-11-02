#include <stdio.h>
int subnon (long long, long long);
int gcd (long long, long long);
int gmd (long long, long long);
int main (void)
{
	long long range;
	long long berange;
	long long result;
	long long result2;
	long long time;
	long long test;
	long long tested_num
	int change;
	int main_change;
	long long berangeo;
	printf("plz enter the change-o 1=toge 0=bige 2=totoge 3=times of a num\n");
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
	}
	if (change == 1)
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
	if (change == 2)
	{
		long long rangeo;
		do
		{
			printf("V1.3's normal stuff\n");
			scanf("%d", &rangeo);
			scanf("%d", &range);
			scanf("%d", &berange);
			printf(" NUM crossed: %d \n", subnon(berange, subnon(rangeo, range)));
		} while (2 == 2);
	}
	if (change == 3)
	{
		printf("plz support the bugs on Wuffles797@gmail.com this is a new feature");
		do
		{
			printf("What is the num?\n");
			scanf("%d", &test);

			printf("How many times?\n");
			scanf("%d", &times);

			if (time >= 0)
			{
				tested_num = 1
					wjile (time > 0)
					{
						tested_num = tested_num * test;
						time --;
					}
				printf(" NUM crossed: %d \n", tested_num);

			}else
			{
				printf("in this feature, the time can only be 0 or up.");
			}
		}while (2 == 2);
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
int subnon (long long rangeo, long long range)
{
	long long rangerangeo;
	do
	{
		rangerangeo = rangeo % range;
		rangeo = range;
		range = rangerangeo;
	} while (rangerangeo !=0);
	return rangeo;
}
