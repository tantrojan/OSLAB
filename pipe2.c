#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
 
int main()
{
    
    int fd[2];
    pid_t childpid;
    char string[]="TT is waving at you!\n";
    char readbuffer[80];
    pipe(fd);
    childpid=fork();
    if(childpid==0)
    {
	dup2(fd[1], STDOUT_FILENO);
	close(fd[0]); //closes stdout
	//write(fd[1],string,(strlen(string)+1)); //writes the string to the pipe
	execu("/bin/ls", "ls", NULL);
    }
    else
    {
		dup2(fd[1], STDOUT_FILENO);
    	close(fd[1]); //closes stdin
    	read(fd[0],readbuffer,sizeof(readbuffer)); //reads the stored string from the pipe
    	printf("\nRead string : %s",readbuffer);
    }
    
    return 0;
  
}

