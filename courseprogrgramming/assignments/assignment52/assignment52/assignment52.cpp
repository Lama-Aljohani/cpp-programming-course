#include <iostream>
#include <string>
using namespace std;


void ReadMarks(int &Mark1, int &Mark2, int &Mark3) {

	cout << "Please Enter your Mark1 " << endl;
	cin >> Mark1;

	cout << "Please Enter your Mark2 " << endl;
	cin >> Mark2;

	cout << "Please Enter your Mark3 " << endl;
	cin >> Mark3;

}

int CalculateAvg(int Mark1, int Mark2, int Mark3 ) {

	return (Mark1 + Mark2 + Mark3) / 3;

}

bool CheckAvg(int Average) {

	return ( Average >= 50);
}

void PrintAverage(bool ResultMarks) {


	if (ResultMarks)
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
	int Mark1, Mark2, Mark3;
	ReadMarks( Mark1, Mark2, Mark3);
	int Average=  CalculateAvg( Mark1,  Mark2,  Mark3);
	bool ResultMarks = CheckAvg(Average);
	PrintAverage(ResultMarks);

	return 0;

}