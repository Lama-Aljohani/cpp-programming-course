#include <iostream>
using namespace std;

int main()
{

    int LaonAmount;
    int Totalmonths;


    cout << "Please enter the LaonAmount" << endl;
    cin >> LaonAmount;

    cout << "Please enter how many months you need to settle the loan" << endl;
    cin >> Totalmonths;

    int MonthlyPayment = LaonAmount / Totalmonths;


    cout << endl;
    cout << MonthlyPayment << endl;

    return 0;
}