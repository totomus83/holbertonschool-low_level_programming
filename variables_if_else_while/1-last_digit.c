#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: return 0 if success
 * more headers goes there
 * betty style doc for function main goes there
*/
int main(void)
{
int n;
int lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
if (lastd > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
else if (lastd == 0)
printf("Last digit of %d is %d and is 0\n", n, lastd);
else if (lastd < 5 && lastd != 0)
printf("Last digit of %d is %d and is less than 5 and not 0\n", n, lastd);
return (0);
}
