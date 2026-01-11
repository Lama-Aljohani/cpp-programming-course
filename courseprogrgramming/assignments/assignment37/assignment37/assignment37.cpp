#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A;
    const double  PI = 3.1416;


    cout << "please enter the number A" << endl;
    cin >> A;


    double area = PI * pow(A, 2) / 4;
    double finalresult = ceil(area);

    cout << endl;

    cout << "finalresult " << finalresult << endl;

    return 0;
}