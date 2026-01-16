#include <iostream>
using namespace std;



struct ContactInformation {

    string phone;
    string email;

};

struct Personalemplpyee {

    string Name;
    int Age;
    string City;
    string Country;
    float MonthlySalary;
    char Gender;
    bool isMarried;
    ContactInformation EmployeeContact;
};


int main()
{
    Personalemplpyee employee1;

    employee1.Name;
    employee1.Age;
    employee1.City;
    employee1.Country;
    employee1.MonthlySalary;
    employee1.Gender;
    employee1.isMarried;
    employee1.EmployeeContact.email;
    employee1.EmployeeContact.phone;

        cout << "Please enter your Name?" << endl;
        cin >> employee1.Name;

        cout << "Please enter your Age?" << endl;
        cin >> employee1.Age;

        cout << "Please enter your City?" << endl;
        cin >> employee1.City;

        cout << "Please enter your Country?" << endl;
        cin >> employee1.Country;

        cout << "Please enter your Monthly Salary?" << endl;
        cin >> employee1.MonthlySalary;

        cout << "Please enter your Gender ?" << endl;
        cin >> employee1.Gender;

        cout << "Are you married  1\0 ?" << endl;
        cin >> employee1.isMarried;

        cout << "Please enter your Email ?" << endl;
        cin >> employee1.EmployeeContact.email;

        cout << "Please enter your Phone ?" << endl;
        cin >> employee1.EmployeeContact.phone;

        cout << "***************************\n";
        cout << "Name: " << employee1.Name << endl;
        cout << "Age: " << employee1.Age << " years." << endl;
        cout << "City: " << employee1.City << endl;
        cout << "Country: " << employee1.Country << endl;
        cout << "Monthly Salary: " << employee1.MonthlySalary << endl;
        cout << "Yearly Salary: " << employee1.MonthlySalary * 12 << endl;
        cout << "Grnder: " << employee1.Gender << endl;
        cout << "Married: " << employee1.isMarried << endl;
        cout << "Email: " << employee1.EmployeeContact.email << endl;
        cout << "Phone: " << employee1.EmployeeContact.phone << endl;
        cout << "***************************\n";

        return 0;

}

