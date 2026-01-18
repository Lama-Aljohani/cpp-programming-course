#include <iostream>
using namespace std;

void mySumprocedure()

{
    int Number1 ,Number2;
    cout << "Please enter Number1?" << endl;
    cin >> Number1;
    cout << "Please enter Number2?" << endl;
    cin >> Number2;
    cout << "**************************************" << endl;
    cout << Number1 + Number2 << endl;

}

int mySumFunction() {

    int Number1, Number2;
    cout << "Please enter Number1?" << endl;
    cin >> Number1;
    cout << "Please enter Number2?" << endl;
    cin >> Number2;
    cout << "**************************************" << endl;
    return  Number1 + Number2;

}

int main()
{
    mySumprocedure();
    
    cout << endl;

    cout << mySumFunction() << endl;

    return 0;

}