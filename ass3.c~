// C program to demonstrate use of fork() and pipe()
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>
 
int main()
{
    int fd[2];
    int retpipe=pipe(fd);
    printf("Pipe function returned : %d \n",retpipe);
    pid_t process;
    process=fork();
    if(process==0)
    {
    	printf("Process Type : %d, Process ID : %d \n",process,getpid());
        char s[100]="Child string";
	write(fd[1], s, strlen(s)+1);
    }
    else
    {
    	printf("Process Type : %d, Process ID : %d \n",process,getpid());
    	char r[100];
    	read(fd[0], r, 101);
    	printf("The received string : %s \n",r);
    }
    return 0;
}
