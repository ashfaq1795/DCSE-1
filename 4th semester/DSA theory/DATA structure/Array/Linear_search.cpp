#include <iostream>

using namespace std;

int main()
{
    int x,y,z,a=55;
    //we can assign any value to a but not in the range of array index.
    cout<<"please enter the size of array:";
    cin>>x;
    int arr[x];
    cout<<"please enter the array elements: \n";
    for (int i=0; i<x; i++)
    {
        cout<<"arr["<<i<<"]= ";
        cin>>y;
    }
    cout<<"Now enter an element you want linearly Search: ";
    cin>>z;
    for(int i=0; i<x; i++) //for loop is used for linear search.
    {
        if(z==arr[i])
        {
            a=i; //we will try to assign the value to a but not in range of array index so that don't assign same value to a again.
        }
    }
     if(a==55) //this is if else statement it will check either the value of a is changed or not if not changed i,e remain 1 then required input is not found.
      {
      cout<<"Not Found\n";
      }
    else //if the value of a is changed then required element found.
    {
      cout<<"Found";
    }
     return 0;
}

//we cannot write above code in this formate because any one statement will execute in each iteration.while we need only one output.

 /*for(int i=0; i<x; i++)

    {
        if(z==arr[i])
        {
            cout<<"Found\n";
        }
        else
        {
            cout<<"Not found";
        }
    }*/

