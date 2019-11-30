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
	long long tested_num;
	int change;
	int main_change;
	long long berangeo;
	double xin, yo, ino;
	int au, bo;
	long change2;
	do
	{
		printf("plz enter the change-o 1=toge 0=bige 2=totoge 3=times of a num 4=list numbers that are can't be divided by other nums'\n");
		scanf("%d", &change);
		if (change == 5779)
		{
			break;
		}
		if (change == 0)
		{
			do
			{
				scanf("%lld", &range);
				if (range == 5779)
				{
					break;
				}
				scanf("%lld", &berange);
				if (berange == 5779)
				{
					break;
				}
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
				if (range == 5779)
				{
					break;
				}
				scanf("%lld", &berange);
				if (berange == 5779)
				{
					break;
				}
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
				scanf("%lld", &rangeo);
				if (rangeo == 5779)
				{
					break;
				}
				scanf("%lld", &range);
				if (range == 5779)
				{
					break;
				}
				scanf("%lld", &berange);
				if (berange == 5779)
				{
					break;
				}
				printf(" NUM crossed: %d \n", subnon(berange, subnon(rangeo, range)));
			} while (2 == 2);
		}
		if (change == 3)
		{
			do
			{
				printf("What is the num?\n");
				scanf("%lld", &test);
				if (test == 5779)
				{
					break;
				}

				printf("How many times?\n");
				scanf("%lld", &time);
				if (time == 5779)
				{
					break;
				}


				if (time >= 0)
				{
					tested_num = test;
					do
					{
						tested_num = tested_num * test;
						time --;
					}while((time - 1) > 0);
					printf(" NUM crossed: %lld \n", tested_num);

				}else
				{
					printf("in this feature, the time can only be 0 or up.");
				}
			}while (2 == 2);
		}
		if (change == 4)
		{
			do
			{
				printf("in this feature, you can list but on rules.test no bugs\n ");
				printf("give an num to control the nums od what you're listing: ");
				scanf("%ld",&change2);
				if (change2 == 5779)
				{
					break;
				}

				printf("2\n");
				xin = 3.0;
				int cobasada = 0;
				do
				{
					ino = 2.0;
					do
					{
						yo = xin / ino;
						au = (int) yo;
						if (yo != au)
						{
							if (ino == xin -1)
							{
								bo = (int) xin;
								printf("%d, ",bo);
							}
						}
						ino++;
					}while (yo != au);
					xin++;
				}while (xin <= change2);
			}while (2 == 2);
		}
		if (change > 4)
		{
			printf("wait for the next update!");
		}
	}while (2 == 2);
	printf("wait for use!\n");
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
