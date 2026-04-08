#include <iostream>
#include <cmath>

using namespace std;

void ReadTringleData(float & A, float &B) {

    cout << "Please enter the tringle side  A " << endl;
    cin >> A;

    cout << "Please enter the tringle base B " << endl;
    cin >> B;

}

float CircleAreaByTringle(float A, float B) {

    const float  PI = 3.141592653589793238;
    float Area = (PI * pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

    return Area;
}
void PrintResult(float Area) {

    cout<<"\nCircle Area =" << Area << endl;
}
int main()
{
    
    float A, B;
    ReadTringleData(A, B);
    PrintResult(CircleAreaByTringle(A, B));
    return 0;
}