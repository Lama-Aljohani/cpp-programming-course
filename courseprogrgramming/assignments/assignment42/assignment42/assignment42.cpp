#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Number;
    double M;

    cout << "please enter the Number " << endl;
    cin >> Number;


    cout << "please enter the M " << endl;
    cin >> M;

    cout << endl;


    double result = pow(Number, M);
    double finalResult = round(result);

    cout << "Result = " << finalResult << endl;




    //cout << "Result =  " << round( pow(Number, M)) << endl;



    return 0;
}