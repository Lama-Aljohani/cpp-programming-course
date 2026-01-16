#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double number;
    
    cout << "please enter the  number " << endl;
    cin >> number;

    

    cout << "number to the power of 2 is  " << round(pow(number, 2))<< endl;
    cout << "number to the power of 3 is  " << round( pow(number, 3))<< endl;
    cout << "number to the power of 4 is  " << round(pow(number, 4)) << endl;

    return 0;
}