#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r;
    const double  PI = 3.1416;


    cout << "please enter the number r" << endl;
    cin >> r;

    
    double area = PI * pow(r,2);

    double finalResult = ceil(area);

    cout << "Result = " << finalResult << endl;
    cout << endl;

    return 0;
}