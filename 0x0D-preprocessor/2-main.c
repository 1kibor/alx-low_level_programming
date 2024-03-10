#include <stdio.h>

/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
        printf("%s\n", __TIME__);
        printf("%s\n", __DATE__);
        printf("%d\n", __LINE__);
        printf("%s\n", __FILE__);
	
	return(0);

}
