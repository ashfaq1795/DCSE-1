#include<iostream>
using namespace std;

const int MAX=3;
class Stack
{
	private:
		int top;
		int STK[MAX];
	public:
		Stack();
		void PUSH(int );
		void POP();
		int size();
		int Top();
		bool IsEmpty();
};
Stack::Stack()
{
	top=-1;
}

void Stack::PUSH(int x)
{
	if(top==MAX-1)
	{
		cout<<"Stack is Full: "<<endl;
		return;
	}
	else
	{
		top++;
		STK[top]=x;
		cout<<x<<" Is on "<<top<<" Position: "<<endl;
	}
}
void Stack::POP()
{
	if(top==-1)
	{
		cout<<"Stack is Empty: "<<endl;
		return;
	}
	else
	{
		
		cout<<STK[top]<<" is on "<<top<<" Position: "<<endl;
		top--;
	}
}

int Stack::size()
{
	return (top+1);
}
int Stack::Top()
{
	return STK[top];
}
bool Stack::IsEmpty()
{
	if(top<0)
	return 1;
	else
	return 0;
}
int main()
{
	Stack s1;
	s1.PUSH(12);
	s1.PUSH(13);
	s1.PUSH(14);

	
	cout<<endl;
	
	s1.POP();
	s1.POP();
//	s1.POP();


    cout<<endl<<"Remain size: "<<s1.size()<<endl<<endl;
    cout<<"The element at the top position: "<<s1.Top()<<endl<<endl;
    cout<<"Stack is "<<(s1.IsEmpty() ? "Empty." : "Not Empty.")<<endl;
	return 0;
}

