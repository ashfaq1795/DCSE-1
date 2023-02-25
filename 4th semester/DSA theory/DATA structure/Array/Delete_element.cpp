//deleting element from array.
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
cout<<"please enter the index of the element you want to delete: ";
cin>>y;
//this if statement will check the condition if index is in the range 1 and size of array then it will run the for loop
//otherwise it will print else statement.
  if (y>=1 && y<=x)
{
    //we will start for loop from input index position and will shift higher index element to lower index.
    for(int i=y; i<=x; i++)
    {
    arr[i]=arr[i+1];
    }
}
else
 cout<<"Sorry you entered the invalid index\n";
x--; //this will decrease the size of array by one number. we can also decrease it in for loop.
for(int i=1; i<=x; i++)
{
    cout<<"arr["<<i<<"]="<<arr[i]<<endl;
}
return 0;
}
