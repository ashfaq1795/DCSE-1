#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
	int array[100],i;
	int repet[100]={};
	srand(time(NULL));
	for(i=0;i<100;i++)
	{
		array[i]=rand()%100;
	}
	for(i=0;i<100;i++)
	{
		repet[array[i]]++;
		if(repet[array[i]]==2)
		{
			cout<<"Repeated Element: "<<array[i];
			break;
		}
	}
	return 0;
}

