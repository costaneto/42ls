#include<stdio.h>

int main()
{
	int loop = 0;
	while (++loop > 0)
	{	
		for (int i = 0; i < 10; i++)
		{
			printf("\033[1;3%dm", i);
			printf("L o c k   Y o u r    S r e e n !   ");
		}	
	}
	return 0;
}
