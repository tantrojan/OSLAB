#include <unistd.h>

int main(int argc, char const *argv[])
{
	int ret;
	char *cmd[]={"ls","-l",NULL};
	char *env[] = {"Home=/usr/home","LOGNAME=home",NULL};
	ret=execve("/bin/ls",cmd,env);
	return 0;
}