#include <iostream>
#include <cmath>

using namespace std;

double circleArea(double r, const double  PI = 3.1416 ) 

{

    double area = PI * pow(r, 2);

    double finalResult = ceil(area);

    return finalResult ;

}

int main()
{

    cout << "Result = " << circleArea(5) << endl;
    cout << endl;

    return 0;
}