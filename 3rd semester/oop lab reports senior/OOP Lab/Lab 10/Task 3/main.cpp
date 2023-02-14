#include <iostream>

using namespace std;


struct book
{
    string title;
    float price;
    int edition;
    int pages;
};

const int MAXSTK=3;

class Stack
{
private:
    book stk[MAXSTK];
    int TOP;
public:
    Stack() {TOP=-1;}
    void PUSH(book a);
    void POP();
    book Top();
    int Size();
    bool IsEmpty();

};

book Stack::Top()
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

void Stack::PUSH(book a)
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
    book a1, a2 , a3;
    a1.title = "Computer Programming";
    a1.edition = 3;
    a1.pages = 500;
    a1.price = 1000;

    a2.title = "Linear Algebra";
    a2.edition=2;
    a2.pages=200;
    a2.price=500;

    a3.title = "Digital Logic Design";
    a3.edition= 4;
    a3.pages = 300;
    a3.price = 500;

    Stack a;
    a.PUSH(a1);
    a.PUSH(a2);
    a.PUSH(a3);

    cout<<"The top book in stack is "<<a.Top().title<<endl;
    a.POP();
    cout<<"The top book in stack is "<<a.Top().title<<endl;
    a.POP();
    cout<<"The top book in stack is "<<a.Top().title<<endl;


    return 0;
}
