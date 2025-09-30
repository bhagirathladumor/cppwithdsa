#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    char name[20];
    float salary;
    char role[20];

public:
    // Setter
    void setEmployeeDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> this->id;
        fflush(stdin);
        cout << "Enter Employee Name: ";
        gets(this->name);
        cout << "Enter Employee Salary: ";
        cin >> this->salary;
        fflush(stdin);
        cout << "Enter Employee Role: ";
        gets(this->role);
    }
    // Getter
    void getEmployeeDetails()
    {
        cout << "Employee ID: \t\t" << this->id << endl;
        cout << "Employee Name: \t\t" << this->name << endl;
        cout << "Employee Salary: \t" << this->salary << endl;
        cout << "Employee Role: \t\t" << this->role << endl;
    }
};