#include <iostream>
#include <string>
using namespace std;

int main()
{
	int Number1;
	int Number2;
	char OperationType;

	cout << "Please Enter Number1 " << endl;
	cin >> Number1;


	cout << "Please Enter Number2 " << endl;
	cin >> Number2;


	cout << "Please Enter Operation Type " << endl;
	cin >> OperationType;

	if (OperationType == '*') {

		cout << Number1 * Number2 << endl;

	}
	else if (OperationType == '/') {

		cout << Number1 / Number2 << endl;

	}
	else if (OperationType == '+') {

		cout << Number1 + Number2 << endl;

	}

	else if (OperationType == '-') {

		cout << Number1 - Number2 << endl;

	}

	else
	{
		cout << "Wrong operation" << endl;

	}

	return 0;

}