#include <iostream>
#include <string>
using namespace std;


void ReadAge(int& Age) {


	cout << "Please Enter your Age " << endl;
	cin >> Age;


}

int CkeckAge(int Age) {

	return (Age >= 18 && Age <= 45);
}

void PrintResult(bool Result) {

	if (Result)
	{

		cout << "Vaild Age " << endl;

	}
	else
	{
		cout << "Invalid Age " << endl;

	}

}

int main()
{
	int Age;
	
	ReadAge(Age);
	bool Result = CkeckAge( Age);
	PrintResult (Result);

	return 0;

}