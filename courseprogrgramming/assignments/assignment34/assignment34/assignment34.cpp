#include <iostream>
#include <cmath>
using namespace std;

double rectangleArea2(double a , double d) {


    return a * sqrt((pow(d, 2) - pow(a, 2)));
}

int main()
{
    cout << rectangleArea2 (5,40) << endl;

    return 0;
}