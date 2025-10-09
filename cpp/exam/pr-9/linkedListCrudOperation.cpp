#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkesList
{
public:
    Node *Head;
    int len;
    LinkesList()
    {
        this->Head = nullptr;
        this->len = 0;
    }

    void insertBeggining(int ddata)
    {
        Node *newNode = new Node(ddata);

        newNode->next = this->Head;
        this->Head = newNode;
        this->len++;
    }

    void search(int position)
    {
        if (Head == nullptr)
        {
            cout << "List is empty..";
            return;
        }

        Node *ptr = Head;
        int pos = 0;
        while (ptr != nullptr)
        {
            if (ptr->data == position)
            {
                cout << "Element " << position << " found at position " << pos << endl;
                return;
            }
            ptr = ptr->next;
            pos++;
        }

        cout << "Element " << position << " not found in the list." << endl;
    }

    void remove(int position)
    {
        if (Head == nullptr || len == 0)
        {
            cout << "List empty" << endl;
        }

        Node *prev = this->Head;
        Node *current = this->Head;

        for (int i = 0; i < position; i++)
        {
            current = current->next;
        }
        for (int i = 0; i < position - 1; i++)
        {
            prev = prev->next;
        }

        prev->next = current->next;
        delete current;
        current = nullptr;
        prev = nullptr;
        delete prev;
        this->len--;
    }

    void reverse()
    {
        if (Head == nullptr)
        {
            cout << "List is empty";
            return;
        }

        Node *prev = nullptr;
        Node *current = Head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        Head = prev;
    }

    void display()
    {
        Node *ptr = this->Head;

        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
};

int main()
{
    LinkesList l1;
    int ch, data, pos;

    do
    {
        cout << endl
             << "1. insert at start" << endl;
        cout << "2. search" << endl;
        cout << "3. Delete" << endl;
        cout << "4. reverse" << endl;
        cout << "5. display" << endl;
        cout << "0. exit" << endl;

        cout << "Enter choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter data : ";
            cin >> data;
            l1.insertBeggining(data);
            break;

        case 2:
            cout << "Enter element to search: ";
            cin >> data;
            l1.search(data);
            break;

        case 3:
            cout << "Enter position : ";
            cin >> pos;
            l1.remove(pos);
            break;

        case 4:
            l1.reverse();
            break;
        case 5:
            l1.display();
            break;

        case 0:
            cout << "Program exited successfully...!";
            break;
        default:
            cout << "Invalid choice...!" << endl;
        }

    } while (ch != 0);
}