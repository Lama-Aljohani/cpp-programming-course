#include <iostream>
using namespace std;


int main()
{
    int Num1;
    double Num2 = 18.99;

    Num1 = Num2;        // Impalecit Conversion from double to in

    Num1 = (int)Num2;  //Explicit Conversion

    Num1 = int (Num2); //Explicit Conversion


    cout << Num1 << endl;
    return 0;
}