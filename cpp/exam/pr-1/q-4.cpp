#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;

    char grade;
    grade = (mark >= 91 && mark <= 100)     ? 'A'
        :(mark >= 81 && mark <= 90)         ? 'B' 
        : (mark >= 71 && mark <= 80)        ? 'C' 
        : (mark >= 61 && mark <= 70)        ? 'D' 
        :(mark >= 41 && mark <= 60)         ? 'E' 
        : (mark >= 33 && mark <= 40)        ? 'F' 
        : 'g'; 
              
    switch (grade) {
        case 'A':
            cout << "Excellent work! Grade: " << grade << endl;
            break;
        case 'B':
            cout << "Well done! Grade: " << grade << endl;
            break;
        case 'C':
            cout << "Good job! Grade: " << grade << endl;
            break;
        case 'D':
            cout << "Better work! Grade: " << grade << endl;
            break;
        case 'E':
            cout << "You passed! Grade: " << grade << endl;
            break;
        case 'F':
            cout << "Sorry, you failed. Grade: " << grade << endl;
            break;
        default:
            cout << "Invalid mark!" << endl;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E') 
    {
        cout << "You are eligible for the next level! congratulation....!" << endl;
    }
    else 
    {
        cout << "You are not eligible next time Better work!" << endl;
    }
}