#include <iostream>
using namespace std;

int main()
{

    float TotalBill;
    float CashPaid;


    cout << "Please enter the TotalBill" << endl;
    cin >> TotalBill;

    cout << "Please enter the CashPaid" << endl;
    cin >> CashPaid;

    
    float paidback =  CashPaid - TotalBill;


    cout << endl;
    cout << paidback << endl;

    return 0;
}