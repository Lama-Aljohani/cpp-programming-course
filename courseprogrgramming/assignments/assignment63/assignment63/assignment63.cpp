#include <iostream>
using namespace std;

void ReadNumber(int& N) {
	cout << "Please enter the Number " << endl;
	cin >> N;
	cout << "*************************" << endl;

}

int CheckOddNumber(int N) {
	int Sum = 0;
	int C = 1;
	while(C <= N){
		if (C % 2 == 0) {
			Sum = Sum + C;

		}
		C++;
	}
	return Sum;
}


void PrintResult(int Sum) {

	cout << "The Sum of Even Numbers from 1 to N is: " << Sum << endl;

}


int main()

{
	int N;
	int Sum;
	ReadNumber(N);
	int Result = CheckOddNumber(N);
	PrintResult(Result);

	return 0;

}