#include <iostream>
#include <cmath>
using namespace std;


float ReadSquare() {

    float A;
    cout << "Please enter radious A ? " << endl;
    cin >> A;

    return A;
}


float CircleAreaInscribedInSquare(float A)

{
    const float  PI = 3.141592653589793238;

    float Area = (pow(A, 2) * PI) / 4;

    return Area;

}


void PrintResult(float Area) {

  cout << "\nCircle Area = " << Area << endl;

}

int main()
{

    PrintResult(CircleAreaInscribedInSquare(ReadSquare()));

    return 0;
}