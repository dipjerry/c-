//exp:4 Use class templete to create a C++ class that implemented the 'stact' ADT.
#include <iostream>
#include <string>
using namespace std;
template <class T>
class stack
{
private:
    int stacksize, top;
    T st[2];

public:
    stack();
    int isFull();
    bool isEmpty();
    void push(T item);
    T pop();
    void display();
};
//constructor
template <class T>
stack<T>::stack()
{
    stacksize = 2;
    // astack = new T[stacksize];
    top = -1;
}
// isFull Function
template <class T>
int stack<T>::isFull()
{
    if (top == stacksize - 1)
        return 1;
    else
        return 0;
}
// isEmpty Function
template <class T>
bool stack<T>::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// Push Function
template <class T>
void stack<T>::push(T item)
{
    if (isFull())
    {
        cout << "Stack is Full ,"
             << "cannot push : " << item << endl;
    }
    else
    {
        st[++top] = item;
        cout << "push : " << item << endl;
    }
}
// Pop function
template <class T>
T stack<T>::pop()
{
    if (!isEmpty())
    {
        cout << "pop :" << st[top--] << endl;
    }
    else
    {
        cout << "Stack is Empty" << endl;
    }
}
int main()
{
    stack<int> int_stack;
    stack<string> str_stack;
    int_stack.push(20);
    str_stack.push("Hello");
    str_stack.push("World");
    str_stack.push("OPPS");
    int_stack.push(30);
    int_stack.push(40);
    int_stack.pop();
    int_stack.pop();
    int_stack.pop();
    str_stack.pop();
    str_stack.pop();
    return 0;
}
