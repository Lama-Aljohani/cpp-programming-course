#include <iostream>
#include <string>

using namespace std;


void ReadNumbers(int& Number1, int& Number2) {

    cout << "Please enter Number 1 ?" << endl;
    cin >> Number1;

    cout << "Please enter Number 2 ?" << endl;
    cin >> Number2;
}

void swapNumber(int &Number1, int &Number2) {

    int Temp;
    Temp = Number1;
    Number1 = Number2;
    Number2 = Temp;
}

void PrintReadNumbers(int Number1, int Number2) {

    cout << "\nNumber1=" << Number1  << endl;
    cout << "Number2=" << Number2 << endl;
}

int main()
{
    int Number1, Number2;
    ReadNumbers(Number1, Number2);
    PrintReadNumbers(Number1, Number2);
    swapNumber(Number1, Number2);
    PrintReadNumbers(Number1, Number2);

    return 0;
}