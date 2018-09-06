#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
 
int main()
{
    
    int fd[2];
    pid_t x;
    char string[]="TT is waving at you!\n";
    char readbuffer[80];
    pipe(fd);
    x=fork();
    if(x==0)
    {
	close(fd[0]);
	write(fd[1],string,(strlen(string)+1)); //writes the string to the pipe
    }
    else
    {
    	close(fd[1]);
    	read(fd[0],readbuffer,sizeof(readbuffer)); //reads the stored string from the pipe
    	printf("\nRead string : %s",readbuffer);
    }
    
    return 0;
  
}

