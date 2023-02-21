#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void)
{
README.md int n;

README.md srand(time(0));
README.md n = rand() - RAND_MAX / 2;
README.md /* your code goes there */
README.md if (n < 0)
README.md {
README.md README.md printf("%d is %s
", n, "negative");
README.md }
README.md else if (n > 0)
README.md {
README.md README.md printf("%d is %s
", n, "positive");
README.md }
README.md else
README.md {
README.md README.md printf("%d is %s
", n, "zero");
README.md }
README.md return (0);

}
