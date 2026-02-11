#include <iostream>
using namespace std;

void ReadNumber(int& N) {
	cout << "Please enter the Number " << endl;
	cin >> N;
	cout << "*************************" << endl;

}

int FactorialofNumber(int N) {
	int factorial = 1;
	for (int C = 1; C <= N; C++) {
		factorial = factorial * C;

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