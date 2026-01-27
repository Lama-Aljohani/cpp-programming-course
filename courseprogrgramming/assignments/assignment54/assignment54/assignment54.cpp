#include <iostream>
#include <string>
using namespace std;


int main()
{
	int PINCode;
	int Balance = 7500;

	cout << "Please Enter your Pin Code " << endl;
	cin >> PINCode;


	if (PINCode == 1234)
	{

		cout << "Your Balance is "<< Balance << endl;

	}
	else
	{
		cout << "Wrong PIN " << endl;

	}

	return 0;

}