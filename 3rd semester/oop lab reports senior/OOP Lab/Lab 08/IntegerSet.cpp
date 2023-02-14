#include <iostream>

using namespace std;

class integerset
{
private:
    bool integer[50];
public:
    integerset();
    friend integerset operator + (integerset , integerset);
    friend integerset operator * (integerset , integerset);
    friend void insertelement(integerset & , int);
    friend void deleteelement(integerset & , int);
    friend void setprint(integerset);
    friend bool operator==(integerset , integerset);
    friend void operator~ (integerset &);
};

integerset::integerset()
{
    for (int i=0 ; i<50 ; i++)
        integer[i]=0;
}
void insertelement(integerset & s, int a)
{
    if (a>=0 && a<50)
    s.integer[a]=1;
}
void deleteelement(integerset & s, int a)
{
    if (a>=0 && a<50)
        s.integer[a]=0;
}
void setprint(integerset s)
{
    for (int i=0 ; i<50 ; i++)
    if (s.integer[i]==1)
        cout<<i<<"  ";
    cout<<endl;
}
bool operator== (integerset a , integerset b)
{
    for (int i=0 ; i<50 ; i++)
    {
        if (a.integer[i]!=b.integer[i])
            return false;
    }
    return true;
}
integerset operator+(integerset a ,integerset b)
{
    integerset c;
    for (int i=0 ; i<50 ; i++)
        if (a.integer[i]==1 || b.integer[i]==1)
        c.integer[i]=1;
    return c;
}
integerset operator * (integerset a ,integerset b)
{
    integerset c;
    for (int i=0 ; i<50 ; i++)
        if (a.integer[i]==1 && b.integer[i]==1)
        c.integer[i]=1;
    return c;
}

void operator~ (integerset & s)
{
    for (int i=0 ; i<50 ; i++)
    {
        if (s.integer[i]==0)
            s.integer[i]=1;
        else
            s.integer[i]=0;
    }
}




int main()
{
    cout<<"Enter the set of integer from 0 through 49. To exit enter -1"<<endl;
    int input;
    integerset a , b , c ,d;
    while(cin>>input, input!=-1)
    {
        insertelement(a , input);
    }
    cout<<endl;
    setprint(a);
    cout<<endl;
    cout<<"Enter another set."<<endl;
    input=0;
    while(cin>>input, input!=-1)
    {
        insertelement(b,input);
    }
    cout<<endl;
    setprint(b);
    cout<<endl;
    cout<<"Delete some element from set one."<<endl;
    input=0;
    while(cin>>input, input!=-1)
    {
        deleteelement(a , input);
    }
    cout<<endl;
    setprint(a);
    cout<<endl;
    if (a==b) cout<<"both sets are equal"<<endl;
    else cout<<"both sets are not equal"<<endl;
    cout<<endl;
    cout<<"The union of the sets are : "<<endl;
    c=a+b;
    cout<<endl;
    setprint(c);
    cout<<endl;
    cout<<"The intersection of sets are : "<<endl;
    d=a*b;
    cout<<endl;
    setprint(d);
    cout<<"A : ";
    setprint(a);
    cout<<"A Compliment : ";
    ~a;
    setprint(a);

    return 0;
}
