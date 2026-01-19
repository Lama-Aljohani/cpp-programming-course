#include <iostream>
#include <string>

using namespace std;


void swapNumber(int &Number1, int &Number2) {

    int Temp;
    Temp = Number1;
    Number1 = Number2;
    Number2 = Temp;

    cout << "After Swap inside function Number1 = " << Number1 << " , Number2=" << Number2 <<endl << endl;
     
    cout << "************************************" << endl;
}

int main()
{
    int Number1, Number2;

    cout << "Please enter the Number1? \n = "  << endl;
    cin >> Number1;

    cout << "Please enter the Number2? \n = " << endl;
    cin >> Number2;
 

    swapNumber(Number1, Number2);

    cout << "After Swap inside Main the function Number1 = " << Number1 << ", Number2=" << Number2 << endl;

    return 0;
}