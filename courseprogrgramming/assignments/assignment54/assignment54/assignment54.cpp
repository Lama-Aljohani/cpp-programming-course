#include <iostream>
#include <string>
using namespace std;

void ReadPIN(int &PINCode) {

	cout << "Please Enter your Pin Code " << endl;
	cin >> PINCode;

}

bool CheckPINCode(int PINCode) {

	for (int i = 1; i <= 3; i++) {

		if (PINCode == 1234)
			return true;
		cout << "Wrong  PIN" << endl;
	}
	return false;
}

void PrintPIN(bool ResultPIN , int Balance = 7500) {

	if (ResultPIN)
	{

		cout << "Your Balance is " << Balance << endl;

	}
	else
	{
		cout << "Card is locked! " << endl;

	}
}

int main()
{
	int PINCode;
	int Balance = 7500;

	bool ResultPIN = CheckPINCode(PINCode);
	PrintPIN(ResultPIN);

	return 0;

}