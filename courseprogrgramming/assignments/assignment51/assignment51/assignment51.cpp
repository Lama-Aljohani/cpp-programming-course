#include <iostream>
#include <string>
using namespace std;



void readmark(int &Mark) {

	cout << "Please Enter your Mark " << endl;
	cin >> Mark;
}

bool CheckMark(int Mark) {
	return (Mark > 50);

}

void PrintMark(bool Result) {

	if (Result)
	{

		cout << "Pass " << endl;

	}
	else
	{
		cout << "Fail " << endl;

	}

}

int main()
{
	int Mark;

	readmark(Mark);
	bool Result = CheckMark(Mark);
	PrintMark (Result);

	return 0;

}