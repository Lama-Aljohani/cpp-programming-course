#include <iostream>
#include <cmath>
using namespace std;

void ReadinputUser(double &Number, int &M) {

    cout << "Please enter the Number " << endl;
    cin >> Number;
    cout << "Please enter the M " << endl;
    cin >> M;
    cout << "*************************" << endl;

}

double pownumberM(double Number, int M) {

    double result = 1;
    int C = 1;
    while (C <= M) {

            result = result * Number;
            C++;
        }
        return result;

    }
int main()
{
    double Number; 
    int M;
    ReadinputUser(Number, M);
    cout << "Result = " << pownumberM(Number, M) << endl;

    return 0;
}