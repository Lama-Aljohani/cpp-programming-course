#include <iostream>
#include <string>
using namespace std;

void ReadPIN(int &PINCode) {

	cout << "Please Enter your Pin Code " << endl;
	cin >> PINCode;

}

int CheckPINCode(int PINCode) {

	return (PINCode == 1234);
}

void PrintPIN(bool ResultPIN , int Balance = 7500) {

	if (ResultPIN)
	{

		cout << "Your Balance is " << Balance << endl;

	}
	else
	{
		cout << "Wrong PIN " << endl;

	}
}


int main()
{
	int PINCode;
	int Balance = 7500;

	ReadPIN(PINCode);
	bool ResultPIN = CheckPINCode(PINCode);
	PrintPIN(ResultPIN);

	return 0;

}