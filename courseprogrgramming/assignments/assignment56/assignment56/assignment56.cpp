#include <iostream>
#include <string>
using namespace std;

int main()
{
	float TotalSales;
	float Percentage;
	float totalcomision;

	cout << "Please Enter Total Sales " << endl;
	cin >> TotalSales;

	if (TotalSales > 1000000) {

		Percentage = 0.01;
	}
	else if (TotalSales >500000) {

		Percentage = 0.02;

	}
	else if (TotalSales >100000) {

		Percentage = 0.03;

	}
	else if (TotalSales > 50000) {

		Percentage = 0.05;

	}

	else
	{
		Percentage = 0.00;

	}

	totalcomision = TotalSales * Percentage;
	cout << "comission = " << totalcomision  << endl;


	return 0;

}