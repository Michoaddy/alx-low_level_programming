#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 when succesful.
 **/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
