#include<stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m";
#define ANSI_COLOR_GREEN   "\x1b[32m";
#define ANSI_COLOR_YELLOW  "\x1b[33m";
#define ANSI_COLOR_BLUE    "\x1b[34m";
#define ANSI_COLOR_MAGENTA "\x1b[35m";
#define ANSI_COLOR_CYAN    "\x1b[36m";
#define ANSI_COLOR_RESET   "\x1b[0m";

int main()
{
	int loop = 0;
	while (++loop > 0)
	{	
		printf("\033[3;31m");
		printf("L o c k   Y o u r    S r e e n !   ");
		printf("\033[1;32m");
		printf("L o c k   Y o u r    S r e e n !   ");
		printf("\033[3;33m");
		printf("L o c k   Y o u r    S r e e n !   ");
		printf("\033[1;34m");
		printf("L o c k   Y o u r    S r e e n !   ");
		printf("\033[3;35m");
		printf("L o c k   Y o u r    S r e e n !   ");
		printf("\033[1;36m");
		printf("L o c k   Y o u r    S r e e n !   ");
		printf("\033[3;37m");
		printf("L o c k   Y o u r    S r e e n !   ");
	}
	return 0;
}
