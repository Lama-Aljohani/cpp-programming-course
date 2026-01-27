#include <iostream>
#include <string>
using namespace std;


int main()
{
	int Mark1;
	int Mark2;
	int Mark3;

	cout << "Please Enter your Mark1 " << endl;
	cin >> Mark1;

	cout << "Please Enter your Mark2 " << endl;
	cin >> Mark2;

	cout << "Please Enter your Mark3 " << endl;
	cin >> Mark3;

	int Average = (Mark1 + Mark2 + Mark3) / 3;

	cout << Average << endl;

	if (Average >= 50)
	{

		cout << "Pass " << endl;

	}
	else
	{
		cout << "Fail " << endl;

	}

	return 0;

}