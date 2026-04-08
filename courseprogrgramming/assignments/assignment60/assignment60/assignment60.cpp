#include <iostream>
using namespace std;

int ReadNumber() {

	int Number;
	cout << "Please enter the Number " << endl;
	cin >> Number;
	cout << "*************************" << endl;

	return Number;
}

void PrintRangeFrom1toN_usingWhile(int N) {

	int Counter = 0;

	cout << "Range printed using while Statement:\n";

	while (Counter < N)
	{
		Counter++;
		cout << Counter << endl;
	}
}

void PrintRangeFrom1toN_usingDoWhile(int N) {

	int Counter = 0;

	cout << "Range printed using Do..while Statement:\n";
	do {

		Counter++;
		cout << Counter << endl;

	} while (Counter < N);

}

void PrintRangeFrom1toN_usingFor(int N) {

	for (int Counter = 1; Counter <= N; Counter++)
	{
		cout << Counter << endl;
	}
}

int main()

{
	int N = ReadNumber();

	PrintRangeFrom1toN_usingWhile(N);
	PrintRangeFrom1toN_usingDoWhile(N);
	PrintRangeFrom1toN_usingFor(N);


	return 0;

}