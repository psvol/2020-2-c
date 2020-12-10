// file: cel2far3.c
#include <stdio.h>

int main(void)
{
	double celcius = 12.46;

	printf(" ¼·¾¾(C) È­¾¾(F) \n");
	printf("---------------------\n");
	printf("%8.21f %8.21f\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.21f %8.21f\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.21f %8.21f\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;

	return 0;
}