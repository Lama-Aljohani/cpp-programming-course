#include <iostream>
#include <string>
using namespace std;

struct PersonInfo {

	string FirstName;
	string LastName;
	int Age;
	string Phone;

};

void ReadInfo( PersonInfo &Info) {

	cout << "Please Enter your First Name" << endl;
	cin >> Info.FirstName;

	cout << "Please Enter your Last Name" << endl;
	cin >> Info.LastName;

	cout << "Please Enter your Age" << endl;
	cin >> Info.Age;

	cout << "Please Enter your Phone" << endl;
	cin >> Info.Phone;

}

void PrintInfo(PersonInfo Info) {

	cout << "\n***************************************************\n";

	cout << "FirstName: " << Info.FirstName << endl;
	cout << "LastName: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone: " << Info.Phone << endl;
	cout << "\n***************************************************\n";

}

void ReadPersonsInfo(PersonInfo Persons[2]) {

	ReadInfo(Persons[0]);
	ReadInfo(Persons[1]);

}

void PrintPersonsInfo(PersonInfo Persons[2]) {

	cout << "\n***************************************************\n";

	PrintInfo(Persons[0]);
	PrintInfo(Persons[1]);

}

int main()
{
	PersonInfo Persons[2];
	
	ReadPersonsInfo(Persons);
	PrintPersonsInfo(Persons);

	return 0;

}