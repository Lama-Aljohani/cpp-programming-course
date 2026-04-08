#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float& A, float& B , float& C) {

    cout << "Please enter the tringle side  A " << endl;
    cin >> A;

    cout << "Please enter the tringle base B " << endl;
    cin >> B;


    cout << "Please enter the tringle side C " << endl;
    cin >> C;

}

float CircleAreaByTringle(float A, float B, float C)
{
    float P;
    const float  PI = 3.141592653589793238;
    P = (A + B + C) / 2;
    float T;
    T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    T = T * T;
    float Area = PI * pow(T,2);

    return Area;
}

void PrintResult(float Area) {

    cout << "\n Circle Area = "<< Area <<endl;
}
int main()
{
    float A, B, C;
    ReadTriangleData(A,B,C);
    PrintResult(CircleAreaByTringle(A,B,C));

    return 0;
}