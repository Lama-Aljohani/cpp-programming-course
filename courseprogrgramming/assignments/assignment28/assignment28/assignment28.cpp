#include <iostream>
using namespace std;

int main()
{
    int days;
    int hours;
    int minutes;
    float seconds;


    days =  24 * 60 * 60;
    hours =  60 * 60;
    minutes = 60;
   
    int totalseconds;
    float numberofdays;
    int reminder;
    float numberofhours;
    float numberofminute; 

    cout << "Please enter the totalseconds" << endl;
    cin >> totalseconds;


    numberofdays = floor( totalseconds / days);
    reminder = totalseconds % days;
    numberofhours = floor (reminder / hours);
    reminder = reminder % hours;
    numberofminute = floor (reminder / minutes);
    reminder = reminder % minutes;
    totalseconds = reminder;


    cout << endl;
    cout << numberofdays <<":" << numberofhours <<":"<< numberofminute <<":"<< totalseconds << endl;



    return 0;
}