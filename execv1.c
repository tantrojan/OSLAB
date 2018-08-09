#include <unistd.h>


int main()
{
	int ret;
	char *cmd[]={"ls","-l",NULL};
	ret=execv("/bin/ls",cmd);
	return 0;
}