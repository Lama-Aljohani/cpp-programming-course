#include <iostream>
using namespace std;

int ReadNumber() {

	int Number;
	cout << "Please enter the Number " << endl;
	cin >> Number;
	cout << "*************************" << endl;

	return Number;
}

void PrintRangeFromNto1_usingWhile(int N) {

	int Counter = N+1;

	cout << "Range printed using while Statement:\n";

	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;
	}
}

void PrintRangeFromNto1_usingDoWhile(int N) {

	int Counter =N+1;

	cout << "Range printed using Do..while Statement:\n";
	do {

		Counter--;
		cout << Counter << endl;

	} while (Counter > 1);

}

void PrintRangeFromNto1_usingFor(int N) {

	cout << "Range printed using For Statement:\n";

	for (int Counter = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

int main()

{
	int N = ReadNumber();

	PrintRangeFromNto1_usingWhile(N);
	PrintRangeFromNto1_usingDoWhile(N);
	PrintRangeFromNto1_usingFor(N);


	return 0;

}