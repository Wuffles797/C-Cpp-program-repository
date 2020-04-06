#include <math.h>
#include <iostream>
using namespace std;
int main ()
{
	const double ANSWER = 3.14159;
	double response;

	cout << endl << "What is the value of pi?" << endl;
	cin >> response;

	while (fabs(response - ANSWER) > 0.0001)
	{
		cout << "Try again" << endl;
		cin >> response;
	}

	cout << "close enough!" << endl << endl;

	return 0;
}
