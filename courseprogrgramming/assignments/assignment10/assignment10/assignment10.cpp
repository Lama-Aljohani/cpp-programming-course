#include <iostream>
using namespace std;

enum enGender { Male, Female };
enum enMaritalStatus { Single, Married };
enum enColor { Red , Yellow , Green, Blue };

struct stAddress {
    string StreetName;
    string BuldingNO;
    string POBox;
    string ZipCode;

};

struct stContactInformation {

    string Phone;
    string Email;
    stAddress Adress;

};

struct stPersonalemplpyee {

    string FirstName;
    string LastName;

    int Age;
    string City;
    string Country;
    float MonthlySalary;
    stContactInformation EmployeeContact;

    enGender MyGender;
    enMaritalStatus MyMaritalStatus;
    enColor MyfavColor;

};


int main()
{
    stPersonalemplpyee Personal;

    Personal.FirstName = "Lama";
    Personal.LastName = "Aljohani";

    Personal.EmployeeContact.Email = "Aljohani@gmail.com";
    Personal.EmployeeContact.Phone = "054123979";
    Personal.EmployeeContact.Adress.POBox = "7769";
    Personal.EmployeeContact.Adress.ZipCode = "55536";
    Personal.EmployeeContact.Adress.StreetName = "Omer bin khtab";
    Personal.EmployeeContact.Adress.BuldingNO = "518";


    Personal.MyGender= enGender::Female;
    Personal. MyMaritalStatus=enMaritalStatus::Single;
    Personal. MyfavColor=enColor::Yellow;

    cout << "*****************************************" << endl;
    cout << Personal.FirstName << endl;
    cout << Personal.LastName << endl;
    cout << Personal.EmployeeContact.Email << endl;
    cout << Personal.EmployeeContact.Phone << endl;
    cout << Personal.EmployeeContact.Adress.POBox << endl;
    cout << Personal.EmployeeContact.Adress.ZipCode << endl;
    cout << Personal.EmployeeContact.Adress.StreetName << endl;
    cout << Personal.EmployeeContact.Adress.BuldingNO << endl;
    cout << "*****************************************"  << endl;

        return 0;

}

