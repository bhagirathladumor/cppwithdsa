#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[50];
    cout << "Enter Name : ";
    cin >> name;

    int len = strlen(name);

    for (int i = 0; i < len; i++)
    {
        int y = 0, z = 1;
        for(int j = 0; j < i; j++) {
            if(name[i] == name[j])
                z++;
        }

        for(int j = 0; j < len; j++) {
            if(name[i] == name[j])
                y++;
        }

        if(z <= 1)
            cout << name[i] << " = " << y << endl << endl ;
    }
}