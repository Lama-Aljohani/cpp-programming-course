#include <iostream>
#include <string>
using namespace std;


int main()
{

    string st1 = "43.22";
    int N1 = 20;
    double N2 = 33.5;
    float N3 = 55.23;

    int num1_integer = stoi(st1);
    double num2_double = stod(st1);
    float num3_float = stof(st1);
    
    
    string SN1 , SN2 , SN3;

    SN1 = to_string(N1);
    SN2 = to_string(N2);
    SN3 = to_string(N3);


    N3 = int(N3);


    cout <<"num1_integer = " << num1_integer << endl;
    cout <<"num2_double = " << num2_double << endl;
    cout <<"num3_float =" << num3_float << endl;
    cout <<"convert int to string =" << SN1 << endl;
    cout << "convert double to string =" << SN2 << endl;
    cout << "convert float to string =" << SN3 << endl;
    cout << "convert float to int =" << N3 << endl;

    return 0;

}