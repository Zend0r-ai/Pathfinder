#include "libmx.h"

void mx_swapstr(char **a, char **b)
{
	char *buf = *a;
	*a = *b;
	b = &buf;
}
