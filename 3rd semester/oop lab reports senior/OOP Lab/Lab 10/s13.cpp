#include <iostream>

using namespace std;

const int MAXQ = 3;

class Q
{
	private:
		int ages[MAXQ];
		static int FRONT;
		static int REAR;
	public:
		Q(){}
		void EnQ(int x)
		{
			if(REAR == MAXQ && FRONT <= 0)
			{
				cout << "Q is FULL" << endl;
				return;
			}
			else
			{
				ages[REAR] = x;
				cout << x << " is stored at location " << REAR << endl;
				cout << "REAR: " << REAR << "\tFRONT: " << FRONT << endl;
				REAR++;
				FRONT--;
			}				
		}
		void DeQ()
		{
			if(REAR == 0 && FRONT == MAXQ)
			{
				cout << "Q is EMPTY" << endl;
				return;				
			}else
			{
				cout << "ITEM: " << ages[FRONT] << "\tFRONT: " << FRONT << endl; 
				cout << "REAR: " << REAR << "\tFRONT: " << FRONT << endl;
				FRONT++;
				REAR--;
			}	
		}
		~Q(){}
		
};

int Q::FRONT = MAXQ;
int Q::REAR = 0;

int main()
{
	Q s1;
	
	s1.EnQ(10);
	s1.EnQ(20);
	s1.EnQ(30);
	s1.EnQ(40);
	s1.EnQ(50);
	
	s1.DeQ();
	s1.DeQ();
	s1.DeQ();
	s1.DeQ();
	s1.DeQ();
	
	return 0;
	
}
