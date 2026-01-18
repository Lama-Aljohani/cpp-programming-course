#include <iostream>
#include <cmath>

using namespace std;

double circleArea(double D , const double  PI = 3.1416)
{

    double area = PI * pow(D, 2) / 4;
    double finalresult = ceil(area);

    return finalresult;

}

int main()
{

    cout << "finalresult =  " << circleArea (10) << endl;

    return 0;
}