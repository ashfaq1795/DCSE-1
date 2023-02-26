#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>



int main()
{
    printf("i am parent before process my PID %d and PPID PPID %d\n",getpid(),getppid());
    int pid;
    pid=fork();
    if(pid!=0)
    {
     printf("i am parent After process my PID %d and PPID PPID %d\n",getpid(),getppid());
     printf("My child PID %d\n",pid);
    }
    else
    {
        sleep(5);
        printf("I am child process & PID %d\n",getpid());
    }
    printf("PID %d is terminated",getpid());
    return 0;
}
