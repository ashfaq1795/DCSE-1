//Q.2 in final term examination.
//program to create 10 thread each thread will add 10 to 100 no.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *sum(void *arg);
int main()
{
    pthread_t thread; //to create thread first we create object for it then we pass its address in pthread_creation funcction
    for (int i=1; i<=10; i++)
    {
     pthread_create(&thread ,NULL ,sum ,NULL);
     sleep(1);//will wait one second
    }
     return 0;
};
void *sum(void *arg)
{
    int sum=0;
    for (int i=10; i<=100; i++)
    {
        sum=sum+i;
    }
    printf("sum of all no from 10 to 100 is = %d\n",sum);
    pthread_exit(NULL); //exit from previous thread to create new one.
}


