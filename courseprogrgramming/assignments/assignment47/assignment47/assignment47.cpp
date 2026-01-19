#include <iostream>
#include <string>
using namespace std;

int Carvalue = 600000;
int Carinstallment = 2500;

void RentCar() {

    int Carvalue = 1000;
    int Carinstallment = 1500;

    cout << "The Car Value inside Functions" << Carvalue << endl;
    cout << "The Car Installment inside Main" << Carinstallment << endl;

}

int main()
{
    int Carvalue = 500;
    int Carinstallment = 580;

    cout <<"The local Car Value inside Main" << Carvalue << endl;
    cout << "The local Car Installment inside Main" << Carinstallment << endl;

    RentCar();
    cout <<"Global car value = " << ::Carvalue << endl;
    cout << "Global Car Installment = " << ::Carinstallment << endl;

    return 0;

}