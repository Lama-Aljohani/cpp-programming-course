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


float MonthlyInstallment(float LaonAmount, float HowManyMonths) {

    return (float)LaonAmount/HowManyMonths;
}

int main()
{


    float LaonAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float HowManyMonths = ReadPositiveNumber("How Many Months ? ");


    cout << "\nMonthly Installment = " <<MonthlyInstallment(LaonAmount, HowManyMonths) << endl;
    cout << endl;

    return 0;
}