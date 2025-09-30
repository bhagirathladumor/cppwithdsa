#include <iostream>
using namespace std;

class Student
{
public:
    char name[20];
    int age;
    int rollno;
    string address;
};
int main()
{
    cout << endl
         << "\t Student Information System " << endl;
    cout << "\t -------------------------- " << endl
         << endl;

    cout << "\t Enter the details of the student " << endl
         << endl;
    Student student;

    cout << "\t Enter the name of the student: ";
    cin >> student.name;
    cout << "\t Enter the age of the student: ";
    cin >> student.age;
    cout << "\t Enter the roll number of the student: ";
    cin >> student.rollno;
    cout << "\t Enter the address of the student: ";
    cin >> student.address;

    cout << endl
         << "\t The output is ...." << endl;
    cout << "\t -------------------------- " << endl
         << endl;

    cout << "\t Name of the student is\t\t: " << student.name << endl;
    cout << "\t Age of the student is\t\t: " << student.age << endl;
    cout << "\t Roll number of the student is\t: " << student.rollno << endl;
    cout << "\t Address of the student is\t: " << student.address << endl;

    cout << endl;
    return 0;
}