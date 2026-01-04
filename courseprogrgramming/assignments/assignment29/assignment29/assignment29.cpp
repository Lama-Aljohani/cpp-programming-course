#include <iostream>
using namespace std;

int main()
{

    int LaonAmount;
    int MonthlyPayment;


    cout << "Please enter the LaonAmount" << endl;
    cin >> LaonAmount;

    cout << "Please enter the MonthlyPayment" << endl;
    cin >> MonthlyPayment;

    int Totalmonths = LaonAmount / MonthlyPayment;


    cout << endl;
    cout << Totalmonths << " Months" << endl;

    return 0;
}