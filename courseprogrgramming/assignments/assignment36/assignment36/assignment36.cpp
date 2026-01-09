#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double D;
    const double  PI = 3.1416;


    cout << "please enter the number D" << endl;
    cin >> D;


    double area = PI * pow(D, 2) / 4;
    double finalresult = ceil(area);

    cout << endl;

    cout << "finalresult =  " << finalresult << endl;

    return 0;
}