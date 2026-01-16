#include <iostream>
using namespace std;

enum Gender { m, f };
enum Status { single, married };
enum Color { Red , Yellow , Green, Blue };

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
    Gender MyGender;
    Status MyStatus;
    employee1.EmployeeContact.email;
    employee1.EmployeeContact.phone;
    Color MyfavColor;

    MyGender = Gender::f;
    MyStatus = Status::single;
    MyfavColor = Color::Yellow;

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
        cout << "Grnder: " << MyGender << endl;
        cout << "Married: " << MyStatus << endl;
        cout << "Email: " << employee1.EmployeeContact.email << endl;
        cout << "Phone: " << employee1.EmployeeContact.phone << endl;
        cout << "***************************\n";

        return 0;

}

