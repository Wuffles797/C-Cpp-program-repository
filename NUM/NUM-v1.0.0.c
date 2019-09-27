#include <stdio.h>
int main (void)
{
	long long range;
	long long berange;
	long long rangeo;
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
	return 0;
}
