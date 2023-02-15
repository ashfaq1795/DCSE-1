#include <iostream>

using namespace std;

struct Person
{
    string first_name;
    string last_name;
    int age;
    string sex;
    string adress;
};

const int MAXQ = 3;

class Q
{
	private:
		Person ages[MAXQ];
		static int FRONT;
		static int REAR;
	public:
		Q(){}
		void EnQ(Person x)
		{
			if(REAR == MAXQ && FRONT <= 0)
			{
				cout << "Q is FULL" << endl;
				return;
			}
			else
			{
				ages[REAR] = x;
				//cout << x << " is stored at location " << REAR << endl;
				//cout << "REAR: " << REAR << "\tFRONT: " << FRONT << endl;
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
				//cout << "ITEM: " << ages[FRONT] << "\tFRONT: " << FRONT << endl;
				//cout << "REAR: " << REAR << "\tFRONT: " << FRONT << endl;
				FRONT++;
				REAR--;
			}
		}
		Person Front()
		{
		    return ages[FRONT];
		}
		int Size()
		{
		    return REAR;
		}
		bool IsEmpty()
		{
		    if(REAR == 0 && FRONT == MAXQ)
                return true;
            else return false;
		}


		~Q(){}

};

int Q::FRONT = MAXQ;
int Q::REAR = 0;

int main()
{
    Person a1 , a2 , a3 ;

    a1.first_name="Najeeb";
    a1.last_name="Uddin";
    a1.age=21;
    a1.sex="male";
    a1.adress="Peshawar";

    a2.first_name="K";
    a2.last_name="Khan";
    a2.age=25;
    a2.sex="male";
    a2.adress="Peshawar";

    a3.first_name="J";
    a3.last_name="Khan";
    a3.age=22;
    a3.sex="male";
    a3.adress="Peshawar";

    Q a;
    a.EnQ(a1);
    a.EnQ(a2);
    a.EnQ(a3);

    cout<<"The front person in queue is "<<a.Front().first_name<<" "<<a.Front().last_name<<"."<<endl;
    a.DeQ();
    cout<<"The front person in queue is "<<a.Front().first_name<<" "<<a.Front().last_name<<"."<<endl;
    a.DeQ();
    cout<<"The front person in queue is "<<a.Front().first_name<<" "<<a.Front().last_name<<"."<<endl;

	return 0;

}
