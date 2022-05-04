#include <stdio.h>
/**
* main - arguments passed
* @argc: argument count
* @argv: array of pointer to argument string
* Return: 0
**/
int main(int argc, char *argv[])
{
/* to suppress unused variable warning */
argv = argv;
printf("%d\n", argc - 1);
return (0);
}
