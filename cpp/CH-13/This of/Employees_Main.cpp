#include "Employees.cpp"
int main()
{
    Employee emp1, emp2;

    // input

    cout << "Enter details for Employee 1:" << endl;
    cout << "---------------------------" << endl;
    emp1.setEmployeeDetails();
    cout << "\nEnter details for Employee 2:" << endl;
    cout << "---------------------------" << endl;
    emp2.setEmployeeDetails();

    // output

    cout << "\nDetails of Employee 1:" << endl;
    cout << "----------------------" << endl;
    emp1.getEmployeeDetails();
    cout << "\nDetails of Employee 2:" << endl;
    cout << "----------------------" << endl;
    emp2.getEmployeeDetails();
    
}