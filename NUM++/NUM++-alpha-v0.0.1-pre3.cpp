#include <stdio.h>
int subnon (long long, long long);
int gcd (long long, long long);
int gmd (long long, long long);
int main (void)
{
	printf("this is the work of Wuffles797\n\n\n");
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
    printf("these are the instructions:\n\n");
    printf("I: How to use this\n");
    printf("	1)");
    printf("you can choose types by input\n");
    printf("	2)");
    printf("you can type 1020090331 to go back\n\n");
    printf("II: Attentions\n");
    printf("	1]");
    printf("don't input any letters in this program, it will get many errors!\n");
    printf("	2]");
    printf("the author is working on the problem of 0, so 0 also can make the result wrong\n\n");
    do
    {
        printf("\n\nplz enter the type_input \n0=Common_divisor(2 NUM) \n1=Minimum_common_multiple \n2=Common_divisor(3 NUM) \n3=The_power_of_a_num \n4=prime_nums\n\n\n");
        scanf("%d", &change);
        printf("\n\n");
        if (change == 1020090331)
        {
            break;
        }
        if (change == 0)
        {
            do
            {
                scanf("%lld", &range);
                if (range == 1020090331)
                {
                    break;
                }
                scanf("%lld", &berange);
                if (berange == 1020090331)
                {
                    break;
                }
                result = gcd(range, berange);
                printf(" NUM Result: %lld \n", result);
                printf("\n");
            }while (2 == 2);
        }
        if (change == 1)
        {
            do
            {
                scanf("%lld", &range);
                if (range == 1020090331)
                {
                    break;
                }
                scanf("%lld", &berange);
                if (berange == 1020090331)
                {
                    break;
                }
                main_change = range * berange;
                do
                {
                    result2 = gmd(range, berange);
                    berangeo = main_change / berange;
                    printf(" NUM Result: %lld \n", berangeo);
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
                if (rangeo == 1020090331)
                {
                    break;
                }
                scanf("%lld", &range);
                if (range == 1020090331)
                {
                    break;
                }
                scanf("%lld", &berange);
                if (berange == 1020090331)
                {
                break;
                }
                printf(" NUM Result: %d \n", subnon(berange, subnon(rangeo, range)));
            } while (2 == 2);
        }
        if (change == 3)
        {
            do
            {
                printf("What is the num?\n");
                scanf("%lld", &test);
                if (test == 1020090331)
                {
                    break;
                }
                printf("How many times?\n");
                scanf("%lld", &time);
                if (time == 1020090331)
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
                    printf(" NUM Result: %lld \n", tested_num);
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
                if (change2 == 1020090331)
                {
                    break;
                }
                printf("2, ");
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
    printf("waiting for use!\n");
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
