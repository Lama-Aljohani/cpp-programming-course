#include <iostream>
using namespace std;


float ReadPositiveNumber(string Message) {

    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float TotalMonths(float LaonAmount, float MonthlyInstalment) {

    return (float) LaonAmount / MonthlyInstalment;
}

int main()
{

    float LaonAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float MonthlyInstalment = ReadPositiveNumber("Please Enter Monthly Installment");
    

    cout << "\nTotal Months to pay = " << TotalMonths(LaonAmount, MonthlyInstalment);
    cout << endl;

    return 0;
}