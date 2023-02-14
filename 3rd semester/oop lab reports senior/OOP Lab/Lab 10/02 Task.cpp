#include<iostream>
using namespace std;

const int MAX=3;

class Q
{
	private:
		int queue[MAX];
		static int front;
		static int rear;
	public:
		Q(){}
		void EnQ(int x)
		{
			if(rear==MAX-1 && front<=0)
			{
				cout<<"Q is Full: "<<endl;
				return;
			}
			else
			{
				queue[rear]=x;
				cout<<x<<" Is stored on "<<rear<<" Position: "<<endl;
				rear++;
				front--;
			}
		}
		void DeQ()
		{
			if(rear==0 && front==MAX)
			{
				cout<<"Q is Empty: "<<endl;
				return;
			}
			else
			{
				cout<<queue[front]<<" Element on "<<rear<<" Positon: "<<endl;
				front++;
				rear--;
			}
		}
		int Front()
		{
			return queue[front];
		}
		int Size()
		{
			return rear;
		}
		bool IsEmpty()
		{
			if(rear==0 && front==MAX)
			return 1;
			else
			return 0;
		}
		~Q(){}
};

int Q::rear=0;
int Q::front=MAX;
int main()
{
	Q s1;
	s1.EnQ(10);
	s1.EnQ(20);
	s1.EnQ(30);
	
	cout<<endl;
	cout<<"Front element: "<<s1.Front()<<endl<<endl;
	cout<<"Size of Queue: "<<s1.Size()<<endl;
	
	
	s1.DeQ();
	s1.DeQ();
	s1.DeQ();
	cout<<(s1.IsEmpty() ? "Is Empty: ": "Is not Empty: ")<<endl;
	return 0;
}

