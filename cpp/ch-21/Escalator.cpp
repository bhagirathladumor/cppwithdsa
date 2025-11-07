#include <iostream>
using namespace std;

class myqueue
{
private:
    int *arr;
    int front;
    int rear;
    int count;
    int capacity;

public:
    myqueue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }
    void elenqueue(int element)
    {
        if (this->rear == capacity - 1)
        {
            cout << endl

                 << "Queue is overflow..!" << endl;
        }
        else if (this->front == -1 && this->rear == -1)
        {
            front++;
            rear++;
            arr[rear] = element;
            count++;
            cout << endl
                 << "Queue element enqueue successfully..!" << endl;
        }
        else
        {
            rear++;
            arr[rear] = element;
            count++;
            cout << endl;
            cout << "Queue element enqueue successfully..!";
        }
    };
    void dequeue() {
        if(this->front == -1 && this->rear == -1) {
            cout << endl << "Queue is empty..!" << endl;
        }
        else if(this->front == this->rear) {
            this->front = -1;
            this->rear = -1;
            this->count--;
        }
        else {
            this->front++;
            this->count--;
        }
    }
    void get_front() {
        if(this->front == -1 && this->rear == -1) {
            cout << endl << "Queue is empty..!" << endl;
        }
        else {
            cout << endl << "Queue front element : " << arr[front] << endl;
        }
    }
    void get_rear() {
        if(this->front == -1 && this->rear == -1) {
            cout << endl << "Queue is empty..!" << endl;
        }
        else {
            cout << endl << "Queue rear element : " << arr[rear] << endl;
        }
    }
    void display() {
        if(this->front == -1 && this->rear == -1) {
            cout << endl << "Queue is empty..!" << endl;
        }
        else {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }   
        }
    }
    void isEmpty() {
        if(this->front == -1 && this->rear == -1) {
            cout << endl << "Queue is empty..!" << endl;
        }
        else {
            cout << endl << "Queue is not empty..!" << endl;
        }
    }
    void isFull() {
        if(this->rear == this->capacity - 1) {
            cout << endl << "Queue is full..!" << endl;
        }
        else {
            cout << endl << "Queue is not full..!" << endl;
        }
    }
    void size() {
        if(this->front == -1 && this->rear == -1) {
            cout << endl << "Queue is empty..!" << endl;
        }
        else {
            cout << endl << "Queue elements size : " << this->capacity << endl;
        }
    }
};

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    myqueue queue(size);

    int ch;
    int element;
    do
    {
        cout << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Rear" << endl;
        cout << "5. Display" << endl;
        cout << "6. isEmpty" << endl;
        cout << "7. isFull" << endl;
        cout << "8. Size" << endl;
        cout << "9. exit...." << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        cout << "Enter your element : ";
        cin >> element;
        queue.elenqueue(element);
            break;
        case 2:
        queue.dequeue();
            break;
        case 3:
        queue.get_front();
            break;
        case 4:
        queue.get_rear();
            break;
        case 5:
        queue.display();
            break;
        case 6:
        queue.isEmpty();
            break;
        case 7:
        queue.isFull();
            break;
        case 8:
        queue.size();
            break;
        case 9:
        cout << endl << " your Program exit......" << endl;
            break;
        default:
        cout << "Invalid Choice......!" << endl;
            break;
        }
    } while (ch != 9);
};