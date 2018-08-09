#include <stdio.h>
#include <unistd.h>
#include <sys/ipc.h>

main()
{
		execlp("cal","cal","2019",NULL);

		// The execlp() system call does not return. Note that the following statement will not executed.

		printf("This statement is not executed if execlp succeeds. \n");
}