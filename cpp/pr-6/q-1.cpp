#include <iostream>
using namespace std;

int main() {
    char name[50];

    cout << "Enter name : ";
    cin >> name;

    int len = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

    char rev[50];
    int j = 0;
    for(int i = len - 1; i >= 0; i--) {
        rev[j] = name[i];
        j++;
    }
    rev[j] = '\0';

    int mark = 0;
    for (int i = 0; i < len; i++)
    {
        if(rev[i] == name[i]) {
            mark = 1;
        }
        else{
            mark = 0;
        }
    }

    if(mark) {
        cout << rev << " & " << name << " Palindrom Strings.";
    }
    else{
        cout << rev << " & " << name << " Not Palindrom Strings.";
    }   
}