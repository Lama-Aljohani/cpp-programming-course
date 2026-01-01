#include <iostream>
using namespace std;

int main()
{

    float BillValue;
    float totalbill;


    cout << "Please enter the BillValue" << endl;
    cin >> BillValue;

     totalbill= BillValue * 1.1;
     totalbill = totalbill * 1.16;



    cout << endl;
    cout << totalbill << endl;

    return 0;
}