#include "Stack.cpp"
using namespace std;

int main()
{
    int n;
    cout << "Enter the Escalator : ";
    cin >> n;

    MyStack stack(n);

    int choice, ele;
    do
    {
        cout <<endl<< "---- : Escalator  Operation :----"<<endl;
        cout << "Press 1. Push Operation "<<endl;
        cout << "Press 2. Pop Operation "<<endl;
        cout << "Press 3. Top Element Operation "<<endl;
        cout << "Press 4. isEmpty Operation "<<endl;
        cout << "Press 5. isFull Operation "<<endl;
        cout << "Press 0. Exit"<<endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Escalator of push: ";
            cin >> ele;
            stack.push(ele);
            break;

        case 2:
            stack.pop();
            break;

        case 3:
            stack.topElement();
            break;

        case 4:
            stack.isEmpty();
            break;

        case 5:
            stack.isFull();
            break;

        case 0:
            cout <<endl<<"Program exit....";
            break;

        default:
            cout <<endl<< "Invalid Choice... Try again...."<<endl;
        }
    } while (choice != 0);

    return 0;
}
