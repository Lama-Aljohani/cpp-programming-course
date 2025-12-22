#include <iostream>
using namespace std;



int main()
{
    int number1;
    int number2 ;
    int number3;

    cout << "Please enter number1" << endl;
    cin >> number1;


    cout << "Please enter number2" << endl;
    cin >> number2;


    cout << "Please enter number3" << endl;
    cin >> number3;


    int Total = number1 + number2 + number3;

    cout << number1 << "+ " << endl;
    cout << number2 << "+ " << endl;
    cout << number3 << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Total = " << Total << endl;

    return 0;

}