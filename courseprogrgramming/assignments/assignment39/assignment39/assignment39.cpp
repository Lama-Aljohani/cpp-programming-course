#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double p;

    const double  PI = 3.1416;


    cout << "please enter the number a" << endl;
    cin >> a;

    cout << "please enter the number b" << endl;
    cin >> b;

    cout << "please enter the number c" << endl;
    cin >> c;

    p = p = (a + b + c) / 2;

    double t =  (a* b * c ) /  (4 * sqrt (p * (p-a)* (p-b)* (p-c))) ;

    t = t * t;

    cout << endl;

    double area = PI * t;

    double finalresult = round(area);
    cout << endl;
    cout << "finalresult =  " << finalresult << endl;
    return 0;
}