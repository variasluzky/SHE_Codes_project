#include <stdio.h>
#include <math.h>

#define P 2

int calc(int x, int y);

int main()
{
	int x, y, z;
	printf("\ninsert 2 numbers: \n");
	z = calc(x, y);
	printf("\n%d^%d + %d^%d = %d", x, P, y, P, z);
printf("watever");
printf("new whatever");
return 0;
}

int calc(int x, int y)
{
	return pow(x, P) +pow(y, P);
}


