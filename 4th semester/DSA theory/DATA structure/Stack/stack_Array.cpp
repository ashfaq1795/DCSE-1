#include <iostream>
using namespace std;
class stack
{
   private:
       int top,x;
       int stk[5];
   public:
    stack()
    {
        top=-1;
        x=0;
    }
       void push(int x)
    {
        if(top==4) //if top equal to size-1 then over flow occur.
                 {
                   cout<<"Sorry Stack is Over flow mean Stack is full";
                 }
            else
            {
              top++;
              stk[top]=x;
            }
        }

    void pop()
    {
         if(top==-1)
        {
            cout<<"Under flow mean Stack become empty after deletion...";
        }
            stk[top]=0;
            top--;
       return;
    }
    void disp()
    {
       if(top==-1)
       {
           cout<<"Stack is Empty";
           return;
       }
       else
       {
        cout<<"\nthe elements in the stack are:\n";
        for (int i=0; i<=top; i++)
        {
            cout<<stk[i]<<endl;
        }
        }
    }
};

int main()
{
   stack s;
   s.push(3);
   s.push(9);
   s.push(7);
   s.push(9);
   s.push(10);
   s.push(12);
   s.disp();
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   s.disp();
    return 0;
}
