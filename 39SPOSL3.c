/*
    NAME:: LUNGADE KIRAN 
    ROLL NO.:: 39
    PRACTICAL NO.:: 03
    TITLE:: PROCESS SYSTEM CALL
*/

/*
                         //TO DEMONSTRATE PROCESS SYSTEM CALL
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid = fork();
	if(pid==-1)
	{
	        printf("Fork Failed!!\n");
	}
	else if(pid == 0)
	{
                printf("Child process ID is :: \"%d\" and my parent process ID is :: \"%d\" \n\n ", getpid(), getppid());
	}
	else
	{
	        printf("\nParent process ID is :: \"%d\" and may grandparent process ID is :: \"%d\" \n",getpid(), getppid());
	}

	return 0;
}
*/

/*
                        /TO DEMONSTRATE ORPHAN PROCESS USING sleep()
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid = fork();
	if(pid == 0)
	{
	        printf("Before Sleep!!\n");
                printf("Child process ID is :: \"%d\" and my parent process ID is :: \"%d\" \n\n ", getpid(), getppid());
	        
	        sleep(10);
	        printf("After Sleep!!\n");
	        printf("Child process ID is :: \"%d\" and my parent process ID is :: \"%d\" \n\n ", getpid(), getppid());
	}
	else
	{
	        _exit(0);
	}

	return 0;
}
*/

                        //TO DEMONSTRATE ZOMBIE PROCESS USING _exit()
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid = fork();
	if(pid == 0)
	{
	        printf("Before Sleep!!\n");
                printf("Child process ID is :: \"%d\" and my parent process ID is :: \"%d\" \n\n ", getpid(), getppid());
	        
	        _exit(0);
	}
	else
	{
	        sleep(2);
	}

	return 0;
}
