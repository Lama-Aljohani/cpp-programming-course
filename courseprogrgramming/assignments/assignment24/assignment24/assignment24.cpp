#include <iostream>
using namespace std;

int main()
{

    int Penny;
    int Nickel;
    int Dime;
    int Quarter;
    int Dollar;


    cout << "Please enter  Penny" << endl;
    cin >> Penny;

    cout << "Please enter  Nickel" << endl;
    cin >> Nickel;

    cout << "Please enter  Dime" << endl;
    cin >> Dime;

    cout << "Please enter  Quarter" << endl;
    cin >> Quarter;

    cout << "Please enter  Dollar" << endl;
    cin >> Dollar;

    float totalPennies = Penny * 1 + Nickel * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;

    float totalDollars= totalPennies/100;

    cout <<  endl;
    cout  << totalPennies << " Pennies " << endl;
    cout << totalDollars << " Dollars " << endl;

    return 0;
}