/*
		PROCESS FORKING 
		
This program illustrates the fork() system call.

*/

#include<stdio.h>
#include<sys/ipc.h>

int main()
{
	int i;
	int x= 10;
	int pid1, pid2, status;
	
	printf("Before forking, the value of x is %d\n" x);
	
	/*
		After forking , we make the parent and its two children
		increment x in different ways to illustrate that they
		have different copies of x
	*/
	if ((pid1 = fork()) == 0) {
		/* First chlid process  */
		for (i=0;i<5;i++){
			printf("\t\t\t At first child: x= %d\n", x);
			x=x+10;
			sleep(1); /* Sleep for 1 second */
		}
	}
	else{
		/* Parent Process */
		/* Create another child process */
		if((pid2=fork())==0){
					
}

