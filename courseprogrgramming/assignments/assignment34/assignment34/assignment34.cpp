#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double d;

    cout << "please enter the number a" << endl;
    cin >> a;

    cout << "please enter the number d" << endl;
    cin >> d;

    double area = a * sqrt( (pow(d, 2) - pow(a, 2)) );

    cout << area <<endl;

    return 0;
}