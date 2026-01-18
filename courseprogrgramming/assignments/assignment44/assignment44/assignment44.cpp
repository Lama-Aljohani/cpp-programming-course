#include <iostream>
#include <string>
using namespace std;


int main()
{
    string FullName;
    string String2;
    string String3;

    cout << "Please enter String1?" << endl;

    getline(cin, FullName);

    cout << FullName << endl;

    cout << "Please enter String2?" << endl;
    cin >> String2;

    cout << "Please enter String3?" << endl;
    cin >> String3;
    cout << "***********************************" << endl;

    string concatN = String2 + String3;

    cout << "the length of string is " << FullName.length() << endl;
    cout << "Characters at 0,2,4,7 are:" << FullName[0] << " " << FullName[2] << " " << FullName[4] << " " << FullName[7] <<endl;
    cout << "Concatenating String2 and String3 =" << concatN << endl;

    int Sum = stoi(String2) * stoi(String3);
    cout << Sum << endl;

    return 0;

}
