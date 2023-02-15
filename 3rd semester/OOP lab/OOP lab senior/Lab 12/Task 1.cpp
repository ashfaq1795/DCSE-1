#include <iostream>

using namespace std;

const int MAXSTK = 3;
template<typename T>
class STACK{
	private:
		T ages[MAXSTK];
	    int TOP;
	public:
		STACK()
		{
			TOP=-1;
		}
		
		void PUSH(T x)
		{
			if(TOP == MAXSTK)
			{
				cout << "STACK is FULL" << endl;
				return;
			}
			else
			{
				TOP++;
				ages[TOP] = x;
				cout << x << " is stored at location " << TOP << endl;
				
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
/*
template<typename T>
T STACK<T>::TOP = 0;
*/
int main()
{

    STACK <char>s1;
	s1.PUSH('h');
	s1.POP();
	
	STACK <int>s2;
	s2.PUSH(4);
	s2.POP();
	
	STACK <double>s4;
	s4.PUSH(3.22);
	s4.POP();
		
	STACK <float>s3;
	s3.PUSH(2.33);
	s3.POP();
	
	return 0;
	
}
