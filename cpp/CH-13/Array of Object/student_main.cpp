#include "Student_record.cpp"

int main()
{
    Student s1[5];

    // s1.setStudentData();
    cout << endl
         << "Enter Student Records...." << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Details of Student " << i + 1 << endl << endl;
        s1[i].setStudentData();
    }

    // s1.getSudentData();
    for (int i = 0; i < 5; i++)
    {
        
        cout << endl << "Student " << i + 1 << endl << endl;
        s1[i].getSudentData();
    }
}