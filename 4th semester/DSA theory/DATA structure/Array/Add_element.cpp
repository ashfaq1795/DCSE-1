//Add an element in array...
#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
cout<<"please enter the size of array: ";
cin>>x;
int arr[x];
cout<<"NOw enter the array elements: \n";
for(int i=1; i<=x; i++)
{
    cout<<"arr["<<i<<"]=";
    cin>>arr[i];
}
cout<<"please enter the index at which you want to add element: ";
cin>>y;
cout<<"Now please enter the element you want to add: ";
cin>>z;
//this if statement will check the condition if index is out of the range 1 and size of array then it will print statment
//otherwise it will execute else statement i,e for loop.
  if (y<1 || y>x)
{
    cout<<"Sorry you entered the invalid index out of range\n";
}
else
{
    //we will start for loop from size of array and goes to input index position y and will shift lower index element to higher index.
    //if we start from input index y to size of array x then it will repeat only one element.
    for(int i=x; i>=y; i--)
    {
    arr[i+1]=arr[i];
    }
    arr[y]=z; //if we assign this value inside the loop then arr[y] value in array will be repeated 2 time.
    //if we assign it before for loop then it will repeat the value of z.
    //this will alway assign outside of the for loop then it will give us correct result.
}

x++; //this will increase the size of array by one number. we can also increase it in for loop.
for(int i=1; i<=x; i++)
{
    cout<<"arr["<<i<<"]="<<arr[i]<<endl;
}
    return 0;
}
