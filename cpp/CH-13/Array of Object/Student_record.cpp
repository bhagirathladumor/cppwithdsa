#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[20];
    char stu_email[30];
    char stu_collage[50];

public:
    // Setter
    void setStudentData()
    {
        cout << "Enter Your ID : ";
        cin >> this->stu_id;
        fflush(stdin);
        cout << "Enter Your Name : ";
        gets(stu_name);
        fflush(stdin);
        cout << "Enter Your Age : ";
        cin >> this->stu_age;
        fflush(stdin);
        cout << "Enter Your Course : ";
        gets(stu_course);
        fflush(stdin);
        cout << "Enter Your City : ";
        gets(stu_city);
        fflush(stdin);
        cout << "Enter Your Email : ";
        gets(stu_email);
        fflush(stdin);
        cout << "Enter Your Collage : ";
        gets(stu_collage);
        fflush(stdin);

        cout << endl
             << "---------------------------------" << endl;
    }

    // Getter
    void getSudentData()
    {
        cout << "Student ID\t: " << stu_id << endl;
        cout << "Student Name\t: " << stu_name << endl;
        cout << "Student Age\t: " << stu_age << endl;
        cout << "Student Course\t: " << stu_course << endl;
        cout << "Student City\t: " << stu_city << endl;
        cout << "Student Email\t: " << stu_email << endl;
        cout << "Student Collage\t: " << stu_collage << endl;
    }
};