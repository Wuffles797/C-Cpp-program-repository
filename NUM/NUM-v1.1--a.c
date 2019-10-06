#include <stdio.h>
int main (void)
{
	long long range;
	long long berange;
	long long rangeo;
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
			printf(" NUM crossed: %lld \n", berange);
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
				rangeo = range % berange;
				if (rangeo == 0)
				{
					break;
				}
				range = berange;
				berange = rangeo;
			} while (rangeo != 0);
			berangeo = main_change / berange;
			printf(" NUM crossed: %lld \n", berangeo);
		} while (2 == 2);
	}
	return 0;
}
