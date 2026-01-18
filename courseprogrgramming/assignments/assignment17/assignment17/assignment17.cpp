#include <iostream>
#include <string>

using namespace std;


int swapNumber(int Number1, int Number2) {

    cout << "Nubmer1 = " << Number1 << endl;
    cout << "Nubmer2 = " << Number2 << endl << endl;
     

    int Temp;
    Temp = Number1;
    Number1 = Number2;
    Number2 = Temp;

    cout << "************************************" << endl;

    cout << "Nubmer1 = " << Number1 << endl;
    cout << "Nubmer2 = " << Number2 << endl;

    return Number1 , Number2;

}


int main()
{

    cout << swapNumber (5 , 6) << endl;

    return 0;
}