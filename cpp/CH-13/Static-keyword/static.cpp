#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int id;
    char name[20];
    int age;

public:
    static char school_name[20];
    void setStudentData()
    {
        cout << "Enter student id : ";
        cin >> this->id;
        fflush(stdin);
        cout << "Enter student name : ";
        gets(this->name);
        cout << "Enter student age : ";
        cin >> this->age;
    }
    void getStudentData()
    {
        cout << "Student id :\t " << id << endl;
        cout << "Student name :\t " << name << endl;
        cout << "Student age :\t " << age << endl;
        cout << "School name :\t " << school_name << endl;
    }
};
    char student::school_name[20] = "ABC Public School";