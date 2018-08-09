#include <unistd.h>

int main()
{
	int ret;
	char *env[] = {"Home=/usr/home","LOGNAME=home",NULL};
	ret=execle("bin/ls","ls","-l",NULL,env);
	return 0;
}