#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "please enter the Numbers\n";
	cin >> number;

	int c = 1;
	int sum=0;
	while (number != -99) {
		sum += number;
		cin >> number;

	}
	cout << "The total of sum numbers is :" << sum << endl;

		return 0;

	}
