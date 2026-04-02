#include <iostream>
using namespace std;

void ReadNumbers(float& A, float& H) {

    cout << "Please enter the tringle side A ? " << endl;
    cin >> A;

    cout << "Please enter the tringle side H ? " << endl;
    cin >> H;

}

float calculateTringleArea(float A, float H) {

    float Area = (A / 2) * H;

    return Area;

}

void PrintResult(float Area) {

    cout << "\nTringle Area = " << Area << endl;

}

int main()
{

    float A, H;
    ReadNumbers(A, H);
    PrintResult(calculateTringleArea(A, H));


    return 0;
}