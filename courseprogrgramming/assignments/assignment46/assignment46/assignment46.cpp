#include <iostream>
using namespace std;
#include <string>

void Myname() {

    cout << "Lama Aljohani" << endl;

}

string userName() {

    string Name;
    cout << "Please enter your Name" << endl;

    //cin.ignore(1, '\n');

    getline(cin, Name);

    return Name;
}

float Number() {

    float num;
    cout << "Please enter the Number" << endl;
    cin >> num;

    return num;

}

int main()
{
    Myname();

    cout << userName() << endl;
    cout << Number() / 2 << endl;

    return 0;

}