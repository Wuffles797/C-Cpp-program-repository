// The most important "stdio.h" and "iostream"
#include <stdio.h>
#include <iostream>

// And a important "unistd.h"
#include <unistd.h>

// Also the "fstream" for writing Calculator's history
#include <fstream>

// very important for System time
#include <ctime>

// string~ ~ ~
#include <cstring>

// [Cin >>] and [Cout <<]
using namespace std;

// three things for using, but one of them is not used in this version anymore
// because of the bug of MCM
int subnon (long long, long long);
int gcd (long long, long long);
int gmd (long long, long long);


// and a new thing i am going to use in this version
// the new gcd
int GCD(int a,int b)
{
    int temp=0;
    while(b!=0){
        temp=a;
        a=b;
        b=temp%b;
    }
    return a;
}

// int main isn't void anymore!!
int main (int argc, const char * argv[])
{
	
	// the important thing for history
	fstream file;
	file.open ("LC_history.txt", ios::in | ios::out | ios::app);
	
	// current date/time based on current system
   	time_t now = time(0);
   
   	// convert now to string form
   	char* dt = ctime(&now);
	
	// i got copyright for this thing
	printf("this is the work of Wuffles797\n\n\n");
	
	// there are many var(s) down here, but not all of them is still useful
	
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
    int start_ctrl;
	int num1;
	int how_to;
	int num2;
	int num3;
	int result3;
	int wow;
	int result_mid;
	int conti_ctrl;	
	int breaky;
	char write_history[200];
	char ori_add[200] = "+";
	char ori_sub[200] = "-";
	char ori_muti[200] = "*";
	char ori_div[200] = "/";
	char ori_end[200] = "=";
	breaky = 0;
	result = 0;
	
    
    
    // a lot of instructions down here going to be printed
    
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
    printf("the author is working on the problem of 0, so 0 also can make the result wrong!\n");
    printf("	3]");
    printf(" #[Minimum_common_multiple]# needs to do twice 1020090331 to get back!\n");
    printf("	4]");
    printf(" #[Cauculator]# needs to do 0 to exit and need type another num when 5:end!\n\n");
    
    
    // Main things down here
    do
    {
    	// a crazy printf for saying the features
        printf("\n\nplz enter the type_input \n	 0 = Common_divisor(2 NUM) \n	 1 = Minimum_common_multiple \n	 2 = Common_divisor(3 NUM) \n	 3 = The_power_of_a_num \n	 4 = Prime_nums\n 	 5 = Calculator \n1020090331 = Exit\n\n\n ");
        
		cout << " Type-Input: ";
		scanf("%d", &change);
        printf("\n\n");
        
		// gotta stop if 1020090331 is the type_input!!
		if (change == 1020090331)
        {
            break;
        }
        
        // CD (2 NUM)'s main lines
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
        
        // MCM's main lines
        // these are the new lines
        // to fix that big bug for a long time
        if (change == 1)
        {
            do
            {
                int a,b;
    			int gcd;
    			int lcm;
    			while (cin >> a >> b) 
				{
					if (a == 1020090331)
					{
						break;
					}
					
					if (b == 1020090331)
					{
						break;
					}
        			gcd = GCD(a, b);
        			lcm = a*b/gcd;
        			cout << " NUM Result:" << lcm << endl << endl;
    			}
			    if (a == 1020090331)
				{
					break;
				}
					
				if (b == 1020090331)
				{
					break;
				}
            } while (2 == 2);
        }
        
        // CD (3 NUM)'s main lines
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
        
        // PNUM's main lines
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
        
        // PRIME's main lines
        if (change == 4)
        {
            do
            {
            	
            	
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
        
        
		//CALCULATOR"S main lines
		if (change == 5)
		{
			for (int i; i != 2; i--)
			{
				for (int i; i != 2; i--)
				{
					cout << "0=exit" << endl << "type other NUMs to start" << endl << endl;
					cin >> start_ctrl;
					cout << endl << endl;
					if (start_ctrl != 0)
					{
						file << dt;
						file << ":	";
						cout << "first num:";
						cin >> result_mid;
						file << result_mid;
						cout << endl;
						do
						{
	
							breaky = 0;
							cout << "add(+)=1, sub(-)=2, muti(*)=3, dvid(/)=4, End(=)=5, exit=0" << endl << endl;
							cin >> how_to;
							cout << endl;
							if (how_to == 5)
							{
								result3 = result_mid;
								cout << "Result:" << result3 << endl << endl << endl << endl;
								file << ori_end;
								file << result3;
								file << endl;
								break;
							}
							if (how_to == 1)
							{
								
								file << ori_add;
					
							} else if (how_to == 2)
							{
								
								file << ori_sub;
					
							} else if (how_to == 3)
							{
								
								file << ori_muti;
					
							} else if (how_to == 4)
							{
								
								file << ori_div;
						
							}
							
							if (how_to == 0)
							{
								result = result_mid;
								cout << "Result:" << result3 << endl << endl << endl << endl;
								break;
							}
							cout << "next num:";
							cin >> num2;
							file << num2;
							cout << endl;
							if (how_to == 1)
							{
								result_mid = result_mid + num2;
								
					
							} else if (how_to == 2)
							{
								result_mid = result_mid - num2;
								
					
							} else if (how_to == 3)
							{
								result_mid = result_mid * num2;
								
					
							} else if (how_to == 4)
							{
								result_mid = result_mid / num2;
								
						
							}
							
							cout << endl << "mid-Result:" << result_mid << endl << endl;
						} while (how_to != 0);
			
					} else if (start_ctrl == 0)
					{	
						break;
						
					} else if (how_to == 0)
					{
						break;
						
					}	
				}
				if (start_ctrl == 0)
				{	
					break;
				}
			}
		}
        
        
        // seeing if you type a higher NUM than 5
        // and higher NUMs are for updates
        if (change > 5)
        {
            printf("wait for the next update!");
        }
        
        
    }while (2 == 2);
    
    // Last word before ending itself
    printf("waiting for use!\n");
    
	// And last, a Nice RETURN with "file.close()"
	file.close();
	return 0;
    
}

// these down here are the main lines of the three things

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
