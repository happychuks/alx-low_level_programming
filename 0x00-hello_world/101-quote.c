#include <unistd.h>
/**
 * main - Entry point
 *
 * write: this takes three arguments,arg1 is the file descriptor for stdout, arg2 is the input string, arg3 returns the number of bytes written, or in case of error, a negative value. 
 * Return: returns 1 as Success
 */
int main(void)
{
	char texts[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, texts, 59);
	return (1);
}
