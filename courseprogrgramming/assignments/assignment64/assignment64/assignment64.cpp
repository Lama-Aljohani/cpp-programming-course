#include <iostream>
using namespace std;

void ReadNumber(int& N) {
	cout << "Please enter the Positive Number " << endl;
	cin >> N;
	cout << "*************************" << endl;
	while (N < 0) {

		cout << "Wrong!Please enter a Positive Number " << endl;
		cin >> N;
	}

}

int FactorialofNumber(int N) {
	int factorial = 1;
	int C = 1;
	while ( C <= N) {
		factorial = factorial * C;
		C++;
	}

		return factorial;
	
}

void PrintResult(int factorial) {

	cout << "The factorial of Number is: " << factorial << endl;

}


int main()

{
	int N;
	int factorial;
	ReadNumber(N);
	int Result = FactorialofNumber(N);
	PrintResult(Result);

	return 0;

}