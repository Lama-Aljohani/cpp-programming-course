#include <iostream>
#include <string>
using namespace std;


int main()
{
    string String1, String2, String3;

    cout << "Please enter String1?" << endl;

    getline(cin, String1);

    cout << String1 << endl;

    cout << "Please enter String2?" << endl;
    cin >> String2;

    cout << "Please enter String3?" << endl;
    cin >> String3;
    cout << "***********************************" << endl;

    cout << "the length of string is " << String1.length() << endl;
    cout << "Characters at 0,2,4,7 are:" << String1[0] << " " << String1[2] << " " << String1[4] << " " << String1[7] <<endl;
    cout << "Concatenating String2 and String3 =" << String2 + String3 << endl;

    int Result = stoi(String2) * stoi(String3);

    cout << String2 <<"*" << String3 << " = " << Result << endl;

    return 0;

}
