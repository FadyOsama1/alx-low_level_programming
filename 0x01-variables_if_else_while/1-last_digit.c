#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - print to screen
  *
	* Return: zero
	*/
int main(void)
{
int n, l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
