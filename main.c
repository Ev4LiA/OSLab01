#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
#include "sub.h"

int main(int argc, char **argv)
{
	int a,b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum(a,b);
	sub(a,b);
}
