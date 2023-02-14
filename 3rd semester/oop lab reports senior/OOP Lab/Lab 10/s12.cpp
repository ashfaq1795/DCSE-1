#include <iostream>

using namespace std;

const int MAXSTK = 3;

class STACK{
	private:
		int ages[MAXSTK];
		static  int TOP;
	public:
		STACK(){}
		
		void PUSH(int x)
		{
			if(TOP == MAXSTK)
			{
				cout << "STACK is FULL" << endl;
				return;
			}
			else
			{
				ages[TOP] = x;
				cout << x << " is stored at location " << TOP << endl;
				TOP++;
			}				
		}
		void POP()
		{
			if(TOP <= 0)
			{
				cout << "STACK is EMPTY" << endl;
				return;				
			}
			else
			{
				TOP--;
				cout << "ITEM: " << ages[TOP] << "\tTOP: " << TOP << endl; 
			}	
		}
		~STACK(){}
};

int STACK::TOP = 0;

int main()
{
	STACK s1
	
	s1.PUSH(10);
	s1.PUSH(20);
	s1.PUSH(30);
	s1.PUSH(40);
	s1.PUSH(50);
	
	s1.POP();
	s1.POP();
	s1.POP();
	s1.POP();
	s1.POP();
	
	return 0;
	
}
