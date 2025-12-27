#include <iostream>
using namespace std;



int main()
{

    int Number1;
    int Number2;

    cout << "Please enter the Number1" << endl;
    cin >> Number1;

    cout << "Please enter the Number2" << endl;
    cin >> Number2;



    cout << "Nubmer1 = " << Number1 << endl;
    cout << "Nubmer2 = " << Number2 << endl << endl;

    int Temp;
    Temp = Number1;
    Number1 = Number2;
    Number2 = Temp;



    cout << "Nubmer1 = " << Number1 << endl;
    cout << "Nubmer2 = " << Number2 << endl;


    return 0;
}