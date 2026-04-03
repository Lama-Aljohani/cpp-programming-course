#include <iostream>
#include <cmath>

using namespace std;


float ReadRDiameter() {

    float D;
    cout << "Please enter the diameter D ? " << endl;
    cin >> D;

    return D;
}

float CircleArea(float D)

{
    const float  PI = 3.141592653589793238;

    float Area = (pow(D, 2) * PI)/4;

    return Area;

}


void PrintResult(float Area) {

    cout << "\nCircle Area = " << Area << endl;

}

int main()
{

     PrintResult(CircleArea (ReadRDiameter ()));

    return 0;
}