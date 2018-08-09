#include <unistd.h>

int main()
{
	int ret;
	ret=execl("/bin/ls","ls","-l",NULL);
	return 0;
}