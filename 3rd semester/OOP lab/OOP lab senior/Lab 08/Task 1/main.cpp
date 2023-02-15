#include <iostream>

using namespace std;

class RationalNumber
{
private:
    int nomenator , denomenator;
    int gcf(int , int );
    RationalNumber reduce(int , int);
public:
    RationalNumber();
    RationalNumber(int , int);
    void display();
    friend RationalNumber operator+(RationalNumber b ,RationalNumber a);
    friend RationalNumber operator-(RationalNumber b ,RationalNumber a);
    friend RationalNumber operator*(RationalNumber b ,RationalNumber a);
    friend RationalNumber operator/(RationalNumber b ,RationalNumber a);
    friend bool operator>(RationalNumber b ,RationalNumber a);
    friend bool operator<(RationalNumber b ,RationalNumber a);
    friend bool operator>=(RationalNumber b ,RationalNumber a);
    friend bool operator<=(RationalNumber b ,RationalNumber a);
    friend bool operator==(RationalNumber b ,RationalNumber a);
    friend bool operator!=(RationalNumber b ,RationalNumber a);
};

    RationalNumber::RationalNumber() : nomenator(1) , denomenator(1) {}
    RationalNumber::RationalNumber(int a, int b)
    {
        if (b==0)
        {
            nomenator=a;
            denomenator=1;
        }
        else if (gcf(a , b)!=1)
        {
            RationalNumber aa;
            aa=reduce(a,b);
            nomenator=aa.nomenator;
            denomenator=aa.denomenator;
        }
        else
        {
            nomenator=a;
            denomenator=b;
        }
    }
    int RationalNumber::gcf(int a , int b)
    {
        int l=a>b ? a : b;
        for (; l>0 ; l--)
        {
            if (a%l==0 && b%l==0)
                return l;
        }
    }
    RationalNumber RationalNumber::reduce(int a , int b)
    {
        int t=gcf(a,b);
        RationalNumber tt;
        tt.nomenator=a/t;
        tt.denomenator=b/t;
        return tt;
    }
    void RationalNumber::display()
    {
        if (denomenator==1)
            cout<<nomenator<<endl;
        else
        cout<<nomenator<<"/"<<denomenator<<endl;
    }
    #if 1
    RationalNumber operator+(RationalNumber b,RationalNumber a)
    {
        RationalNumber t;
        t.nomenator=(b.nomenator*a.denomenator)+(b.denomenator*a.nomenator);
        t.denomenator=(b.denomenator*a.denomenator);
        t=t.reduce(t.nomenator,t.denomenator);
        return t;
    }
    RationalNumber operator-(RationalNumber b ,RationalNumber a)
    {
        RationalNumber t;
        t.nomenator=(b.nomenator*a.denomenator)-(b.denomenator*a.nomenator);
        t.denomenator=(b.denomenator*a.denomenator);
        t=t.reduce(t.nomenator,t.denomenator);
        return t;
    }
    RationalNumber operator*(RationalNumber b, RationalNumber a)
    {
        RationalNumber t;
        t.nomenator=b.nomenator*a.nomenator;
        t.denomenator=b.denomenator*a.denomenator;
        t=t.reduce(t.nomenator,t.denomenator);
        return a;
    }
    RationalNumber operator/(RationalNumber b,RationalNumber a)
    {
        RationalNumber t;
        t.nomenator=b.nomenator*a.denomenator;
        t.denomenator=b.denomenator*a.nomenator;
        t=t.reduce(t.nomenator,t.denomenator);
        return a;
    }
    bool operator>(RationalNumber b,RationalNumber a)
    {
        if (((float)b.nomenator)/((float)b.denomenator)>((float)a.nomenator)/(float)a.denomenator)
            return true;
        else return false;
    }
    bool operator<(RationalNumber b, RationalNumber a)
    {
        if (((float)b.nomenator)/((float)b.denomenator)<((float)a.nomenator)/(float)a.denomenator)
            return true;
        else return false;
    }
    bool operator>=(RationalNumber b, RationalNumber a)
    {
        if (((float)b.nomenator)/((float)b.denomenator)>=((float)a.nomenator)/(float)a.denomenator)
            return true;
        else return false;
    }
    bool operator<=(RationalNumber b ,RationalNumber a)
    {
        if (((float)b.nomenator)/((float)b.denomenator)<=((float)a.nomenator)/(float)a.denomenator)
            return true;
        else return false;
    }
    bool operator==(RationalNumber b, RationalNumber a)
    {
        if (((float)b.nomenator)/((float)b.denomenator)==((float)a.nomenator)/(float)a.denomenator)
            return true;
        else return false;
    }
    bool operator!=(RationalNumber b ,RationalNumber a)
    {
        if (((float)b.nomenator)/((float)b.denomenator)!=((float)a.nomenator)/(float)a.denomenator)
            return true;
        else return false;
    }
    #endif

int main()
{
    #if 0
    RationalNumber a(3,6);
    a.display();
    #endif

    RationalNumber a(3,6)  , b(6,12) , c ;
    cout<<"a : ";
    a.display();
    cout<<"\nb : ";
    b.display();
    cout<<"\nAddition : ";
    c=a+b;
    c.display();
    cout<<"\nSubtraction : ";
    c=a-b;
    c.display();
    cout<<"\nDivision : ";
    c=a/b;
    c.display();
    cout<<"\nMultiplication : ";
    c=a*b;
    c.display();
    cout<<endl;

    if(a>b)
        cout<<"a is greater than b"<<endl;
    if (a<b)
        cout<<"a is less than b"<<endl;
    if (a>=b)
        cout<<"a is greater than or equal to b"<<endl;
    if (a<=b)
        cout<<"a is less than or equal to b"<<endl;
    if (a==b)
        cout<<"a is equal to b"<<endl;
    if (a!=b)
        cout<<"a is not equal to b"<<endl;


    return 0;
}
