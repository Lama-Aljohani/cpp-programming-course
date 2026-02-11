#include <iostream>
#include <cmath>
using namespace std;

void ReadinputUser(double &Number, double &M) {

    cout << "Please enter the Number " << endl;
    cin >> Number;
    cout << "Please enter the M " << endl;
    cin >> M;
    cout << "*************************" << endl;

}

double pownumberM(double Number,double M) {
    
    double result = 1;

    for (int C = 1; C <= M; C++) {

        result = result * Number;
    }
    return result;

}

int main()
{
    double Number; 
    double M;
    ReadinputUser(Number, M);
    cout << "Result = " << pownumberM(Number, M) << endl;

    return 0;
}