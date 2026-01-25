#include <iostream>
#include <string>
using namespace std;


int main()
{
	float Grades[3];

	cout << "Please Enter Grade1? \n" ;
	cin >> Grades[0]; 

	cout << "Please Enter Grade2? \n";
	cin >> Grades[1];

	cout << "Please Enter Grade3? \n" ;
	cin >> Grades[2];

	float Avg = (Grades[0] + Grades[1] + Grades[2]) / 3;

	cout << "********************************** " << endl;

	cout << "The average of grades is " << Avg << endl;

	return 0;

}