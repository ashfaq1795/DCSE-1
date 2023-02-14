#include <iostream>

using namespace std;

const int MAXQ = 3 ;

class Q
{
    int q[MAXQ];
    int FRONT;          //position for removing elements
    int REAR;           //position for adding elements
    int n;              //current number of elements
public:
    Q();
    void Enqueue(int N);
    void Dequeue();
    int Front();
    int Size();
    bool IsEmpty();
};

Q::Q()
{
    FRONT=0;
    REAR=-1;
    n=0;
}

void Q::Enqueue(int N) // add element N at rear
{
    if (n==MAXQ)
    {
        cout<<"Overflow!"<<endl;
    }
    else
    {
        n++;
        REAR=(REAR+1)%MAXQ; //this for to wrap around the end of queue as in circular queue
        q[REAR]=N;
    }
}

void Q::Dequeue() // removes element from front
{
    if (n==0)
    {
        cout<<"Underflow!"<<endl;
    }
    else
    {
        n--;
        FRONT=(FRONT+1)%MAXQ; // for wrap around
    }
}

int Q::Front() //return the element at front
{
    return q[FRONT];
}

int Q::Size() //return the number of elements stored in the queue
{
    return n;
}

bool Q::IsEmpty() //return true if queue is empty otherwise false
{
    return (n==0 ? true : false);
}

int main()
{
    Q a;
    a.Enqueue(10);
    a.Enqueue(20);
    a.Dequeue();
    a.Enqueue(30);
    a.Enqueue(40);
 //   a.Enqueue(50);
    a.Dequeue();
   // a.Dequeue();
 //   a.Dequeue();
  //  a.Dequeue();
    cout<<"The number of elements stored in queue is : "<<a.Size()<<endl;
    cout<<"The queue is "<<(a.IsEmpty() ? "Empty." : "Not Empty.")<<endl;
    a.Enqueue(33);
    a.Enqueue(44);
    a.Dequeue();
    cout<<"The element at the front is : "<<a.Front()<<endl;


    return 0;
}


/* if we enqueue and dequeue consecutively then this will create a problem where
the REAR will reach the maximum size of the array while there will be space available
at the beginning of the array. To solve this problem we connected the end of the array
to the beginning in order to create circular queue. In this case the
REAR will come to the beginning of the array when reaches the end.*/
