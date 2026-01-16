#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double l;
    const double  PI = 3.1416;


    cout << "please enter the number l" << endl;
    cin >> l;


    double area =  pow(l, 2) / (PI * 4);
    double finalresult = floor(area);

    cout << endl;


    cout << "finalresult =  " << finalresult << endl;

    return 0;
}