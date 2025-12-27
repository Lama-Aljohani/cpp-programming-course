#include <iostream>
using namespace std;



int main()
{

    int Mark1;
    int Mark2;
    int Mark3;


    cout << "Please enter the Mark1" << endl;
    cin >> Mark1;

    cout << "Please enter the Mark2" << endl;
    cin >> Mark2;


    cout << "Please enter the Mark3" << endl;
    cin >> Mark3;


    int Average = (Mark1 + Mark2 + Mark3) /3 ;


    cout << "Average = " << Average << endl;

    return 0;
}