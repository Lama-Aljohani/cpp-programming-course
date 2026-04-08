#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumference() {

    float L;
    cout << "Please enter the Circumference L " << endl;
    cin >> L;
    return L;

}

float CircalAreaByCircumference(float L) {

    const float  PI = 3.141592653589793238;
    float Area = pow(L, 2) / (PI * 4);

    return Area;
}

void PrintResult(float Area) {

    cout << "\nCircalArea = " << Area << endl;
}

int main()
{

    PrintResult(CircalAreaByCircumference(ReadCircumference()));

    return 0;
}