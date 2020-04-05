#include <iostream>
using namespace std;

int subnon (long long, long long);
int gcd (long long, long long);
int gmd (long long, long long);
int main ()
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
		cin >> change;
		if (change == 5779)
		{
			break;
		}
		if (change == 0)
		{
			do
			{
				cin >> range;

				if (range == 5779)
				{
					break;
				}

				cin >> berange;

				if (berange == 5779)
				{
					break;
				}

				result = gcd(range, berange);
				cout << result << endl;

			}while (2 == 2);
		}
		if (change == 1)
		{
			do
			{
				cin >> range;

				if (range == 5779)
				{
					break;
				}

				cin >> berange;

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
				cin >> rangeo;

				if (rangeo == 5779)
				{
					break;
				}

				cin >> range;
				
				if (range == 5779)
				{
					break;
				}

				cin >> berange;
				
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
				cout << "NUM?" << endl;
				cin >> test;

				if (test == 5779)
				{
					break;
				}

				cout << "times?" << endl;
				cin >> time;

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
			cout << "wait" << endl;
		}
	}while (2 == 2);
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
