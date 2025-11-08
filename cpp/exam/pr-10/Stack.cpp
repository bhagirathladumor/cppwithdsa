#include <iostream>
using namespace std;

class Escalator
{
public:
    virtual void push(int ele) = 0;
    virtual void pop() = 0;
    virtual void topElement() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
    virtual ~Escalator() {} 
};

class MyStack : public Escalator
{
private:
    int *arr;
    int top;
    int count;
    int size;

public:
    
    MyStack(int n)
    {
        this->size = n;
        this->arr = new int[this->size]; 
        this->count = 0;
        this->top = -1;
    }

    ~MyStack()
    {
        delete[] arr;
    }

    void push(int ele)
    {
        if (this->top == this->size - 1)
            cout <<endl<< "stock is Full....."<<endl;
        else
        {
            this->top++;
            this->arr[this->top] = ele;
            this->count++;
        }
    }

    void pop()
    {
        if (this->top == -1)
            cout <<endl<< "stock is Empty...."<<endl;
        else
        {
            this->top--;
            this->count--;
        }
    }

    void topElement()
    {
        if (this->top == -1)
            cout <<endl << "stock is Empty..."<<endl;
        else
            cout <<endl<< "Top Element: " << this->arr[this->top] << endl;
    }

    void isEmpty()
    {
        if (this->top == -1)
            cout <<endl<< "stock is Empty...."<<endl;
        else
            cout <<endl<< "stock is Not Empty...."<<endl;
    }

    void isFull()
    {
        if (this->top == this->size - 1)
            cout <<endl<< "stock is Full...."<<endl;
        else
            cout <<endl<<"stock is Not Full...."<<endl;
    }
};



