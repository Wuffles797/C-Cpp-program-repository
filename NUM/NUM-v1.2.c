#include <stdio.h>
int subnon(int, int);
int main (void)
{
	int rangeo,range,berange;
	printf("this is a big new feature, it could have bugs, but it only needs 3 (not 2 or 4) nums!\n");
	scanf("%d",&rangeo);
	scanf("%d",&range);
	scanf("%d",&berange);
	printf(" NUM crossed: %d\n",subnon(berange,subnon(rangeo,range)));
	return 0;
}
int subnon(int rangeo, int range)
{
	int berangeo;
	do
	{
		berangeo = rangeo % range;
		rangeo = range;
		range = berangeo;
	}while(berangeo != 0);
	return rangeo;
}

