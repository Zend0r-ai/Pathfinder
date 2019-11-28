#include "libmx.h"

char *mx_strnew(const int size) {
	if(size < 0)
		return 0;
	char *buf = (char *)malloc((size + 1));
	int i;
	for(i = 0; i <= size; i++)
		buf[i] = '\0';
	return buf;
}
