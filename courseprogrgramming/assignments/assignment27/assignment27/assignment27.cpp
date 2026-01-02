#include <iostream>
using namespace std;

int main()
{

    float days;
    float hours;
    float minutes;
    float seconds;



    cout << "Please enter the days" << endl;
    cin >> days;

    cout << "Please enter the hours" << endl;
    cin >> hours;


    cout << "Please enter the minutes" << endl;
    cin >> minutes;


    cout << "Please enter the seconds" << endl;
    cin >> seconds;

    days = days * 24 * 60 * 60;
    hours = hours * 60*60 ;
    minutes = minutes * 60;

    float numberofsecondes = days + hours + minutes + seconds;
    cout << endl;
    cout << numberofsecondes << "secondes " << endl;

    return 0;
}