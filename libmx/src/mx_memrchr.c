#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n){
	const char *buf = s;
	unsigned int i = n;
	buf += n - 1;
	while(i > 0 && *buf){
		if(*buf == (char) c)
			return (void *)buf;
		i++;
		buf--;
	}
	return NULL;
}
