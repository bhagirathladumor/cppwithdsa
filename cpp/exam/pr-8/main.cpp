#include <iostream>
#include "Student_Managment.cpp"
using namespace std;

int main()
{
    StudentManagement<int> student;
    int ch;

    do
    {
        cout << "Student Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Remove Student" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            student.addStudent();
            break;
        case 2:
            student.displayAll();
            break;
        case 3:
            student.searchStudent();
            break;
        case 4:
            student.removeStudent();
            break;
        case 0:
            cout << "Program Exited Successfully...!" << endl
                 << endl;
            break;
        default:
            cout << "Invalid choice" << endl
                 << endl;
        }
    } while (ch != 0);
}
