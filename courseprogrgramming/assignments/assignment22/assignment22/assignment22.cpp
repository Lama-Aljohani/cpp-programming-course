#include <iostream>
using namespace std;



int main()
{

    float a;
    float b;



    cout << "Please enter  a" << endl;
    cin >> a;

    cout << "Please enter  b" << endl;
    cin >> b;



   float Area = (3.14 * b * b / 4) * ((2*a-b)/(2*a+b)) ;

    cout << "Area = " << Area << endl;

    return 0;
}