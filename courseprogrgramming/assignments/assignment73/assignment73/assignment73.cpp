#include <iostream>
#include <string>
using namespace std;


int main()
{
	int sum = 0;
	int Number=0;

	for (int i = 1; i <= 5; i++) {
		cout << "Please Enter the number:  ";
		cin >> Number;


		if (Number > 50)
		{
			cout << " The number is greater than 50 and wont be calculate" << endl;
			continue;

		}
		 sum += Number;
		 cout << "The sum is " <<sum << endl;
	}

	return 0;

}