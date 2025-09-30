#include "static.cpp"

int main()
{
    student s1, s2;
    cout << endl
         << "=============================" << endl;
    cout << "Enter details of student 1  " << endl;
    cout << "-----------------------------" << endl;
    s1.setStudentData();
    cout << endl
         << "Enter details of student 2  " << endl;
    cout << "-----------------------------" << endl;
    s2.setStudentData();

    cout << endl
         << "Details of student 1  " << endl;
    cout << "---------------------" << endl;
    s1.getStudentData();
    cout << endl
         << "Details of student 2  " << endl;
    cout << "---------------------" << endl;
    s2.getStudentData();
}