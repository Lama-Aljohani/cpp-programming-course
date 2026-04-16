#include <iostream>
using namespace std;

struct stPiggyBankContent
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;

    cout << "Please enter  Pennies" << endl;
    cin >> PiggyBankContent.Pennies;

    cout << "Please enter  Nickels" << endl;
    cin >> PiggyBankContent.Nickels;

    cout << "Please enter  Dimes" << endl;
    cin >> PiggyBankContent.Dimes;

    cout << "Please enter  Quarters" << endl;
    cin >> PiggyBankContent.Quarters;

    cout << "Please enter  Dollars" << endl;
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    int TotalPennies = 0;

    TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 +
        PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + 
        PiggyBankContent.Dollars * 100;

    return TotalPennies;
}

int main()
{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    cout << endl << "Total Pennies = " << TotalPennies << endl;
    cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;

    return 0;
}