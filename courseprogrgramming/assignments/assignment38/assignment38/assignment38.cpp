#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;

    const double  PI = 3.1416;


    cout << "please enter the number a" << endl;
    cin >> a;

    cout << "please enter the number b" << endl;
    cin >> b;

    double area = (PI * pow(b, 2) /4 ) * ((2*a-b) / (2 * a + b));
    double finalresult = floor(area);

    cout << endl;


    cout << "finalresult =  " << finalresult << endl;

    return 0;
}