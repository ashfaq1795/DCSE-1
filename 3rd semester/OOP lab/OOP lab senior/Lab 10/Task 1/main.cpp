#include <iostream>

using namespace std;

const int MAXSTK=3;

class Stack
{
private:
    int stk[MAXSTK];
    int TOP;
public:
    Stack() {TOP=-1;}
    void PUSH(int a);
    void POP();
    int Top();
    int Size();
    bool IsEmpty();

};


int Stack::Top()
{
    return stk[TOP];
}

int Stack::Size()
{
    return (TOP+1);
}

bool Stack::IsEmpty()
{
    return (TOP<0);
}

void Stack::PUSH(int a)
{
    if (TOP==MAXSTK-1)
    {
        cout<<"Overflow!"<<endl;
        return;
    }
    else
    {
        TOP++;
        stk[TOP]=a;
    }
}

void Stack::POP()
{
    if (TOP==-1)
    {
        cout<<"Underflow!"<<endl;
        return;
    }
    else
    {
        TOP--;
    }
}

int main()
{
    Stack a;
    a.PUSH(10);
    a.PUSH(20);
    a.PUSH(30);
    a.PUSH(40);
    a.POP();
    a.POP();
    a.POP();
    a.POP();
    cout<<"Stack is "<<(a.IsEmpty() ? "Empty." : "Not Empty.")<<endl;
    cout<<"The number of elements stored in stack is : "<<a.Size()<<endl;
    a.PUSH(40);
    cout<<"The top element of the stack is : "<<a.Top()<<endl;

    return 0;
}
