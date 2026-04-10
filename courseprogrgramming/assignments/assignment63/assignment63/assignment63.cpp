#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber() {

	int Number;
	cout << "Please enter the Number " << endl;
	cin >> Number;
	cout << "*************************" << endl;

	return Number;
}

enOddOrEven CheckOddOrEven(int Number) {

	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumEvenNumberFromtoN_UsingWhile(int N) {

	int Counter = 0;
	int Sum = 0;
	cout << "Sum even numbers using while Statement: \n";

	while (Counter < N)
	{
		Counter++;
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
	}
	return Sum;
}
int SumEvenNumberFromtoN_UsingDoWhile(int N) {


	int Counter = 0;
	int Sum = 0;
	cout << "Sum even numbers using Do..while Statement: \n";

	do
	{
		Counter++;
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
	} while (Counter < N);
	return Sum;
}

int SumEvenNumberFromtoN_UsingFor(int N) {

	int Sum = 0;
	cout << "Sum even numbers using For Statement: \n";

	for (int Counter = 1; Counter <= N; Counter++)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
	}

	return Sum;
}

int main()

{

	int N = ReadNumber();

	cout << SumEvenNumberFromtoN_UsingWhile(N) << endl;
	cout << SumEvenNumberFromtoN_UsingDoWhile(N) << endl;
	cout << SumEvenNumberFromtoN_UsingFor(N) << endl;


	return 0;

}