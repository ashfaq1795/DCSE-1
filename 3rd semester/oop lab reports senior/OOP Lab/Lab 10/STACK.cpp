#include<iostream>

using namespace std;
const int MAXSTK=3;
class stack
{
	private:
		int age[MAXSTK];
		static int TOP;
	public:
		stack(){}
		void PUSH(int x)
		{
			if(TOP==MAXSTK)
			{
				cout<<"Stack is Full: "<<endl;
				return ;
			}
			else 
			{
				age[TOP]=x;
				cout<<x<< " Is on "<<TOP<<" position: "<<endl;
				TOP++;
			}
		}
		void POP()
		{
			if(TOP<=0)
			{
				cout<<"Stack is Empty: "<<endl;
			//	return;
			}
			else
			{
				
				TOP--;
				cout<<age[TOP]<<" is on "<<TOP<<" Position: "<<endl;
			}
		}
		~stack(){}
};
int stack::TOP=0;
int main()
{
	stack s1;
	s1.PUSH(5);
	s1.PUSH(7);
	s1.PUSH(9);
	s1.PUSH(1);
	cout<<endl;
	
	s1.POP();
	s1.POP();
	s1.POP();
	s1.POP();
	
	return 0;
}
