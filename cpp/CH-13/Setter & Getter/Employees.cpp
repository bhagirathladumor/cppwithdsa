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
        cin >> id;
        fflush(stdin);
        cout << "Enter Employee Name: ";
        gets(name);
        cout << "Enter Employee Salary: ";
        cin >> salary;
        fflush(stdin);
        cout << "Enter Employee Role: ";
        gets(role);
    }
    // Getter
    void getEmployeeDetails()
    {
        cout << "Employee ID: \t\t" << id << endl;
        cout << "Employee Name: \t\t" << name << endl;
        cout << "Employee Salary: \t" << salary << endl;
        cout << "Employee Role: \t\t" << role << endl;
    }
};