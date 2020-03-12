#include <iostream>
#include <unistd.h> 
using namespace std;
int main()
{
	cout << "this is the work of Wuffles797" << endl << endl;
	cout << "Little_Cauculator V1.2.0" << endl << endl << endl << endl;
	int start_ctrl;
	int num1;
	int how_to;
	int num2;
	int num3;
	int result;
	int wow;
	int result_mid;
	int conti_ctrl;	
	int breaky;
	breaky = 0;
	result = 0;
	
	for (int i; i != 2; i--)
	{
		for (int i; i != 2; i--)
		{
			cout << "0=exit" << endl << "type other NUMs to start" << endl << endl;
			cin >> start_ctrl;
			cout << endl << endl;
			if (start_ctrl != 0)
			{
				cout << "first num:";
				cin >> result_mid;
				cout << endl;
				do
				{	
					breaky = 0;
					cout << "add(+)=1, sub(-)=2, muti(*)=3, dvid(/)=4, End(=)=5, exit=0" << endl << endl;
					cin >> how_to;
					cout << endl;
					if (how_to == 0)
					{
						result = result_mid;
						cout << "Result:" << result << endl << endl << endl << endl;
						break;
					}
					cout << "next num:";
					cin >> num2;
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
			
					} else if (how_to == 5)
					{
						result = result_mid;
						cout << "Result:" << result << endl << endl << endl << endl;
						break;
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

	cout << endl << endl << "See You Next Time!" << endl << endl;
	sleep(3);
	return 0;
}
