#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n){
	unsigned int i = 0;
	const char *buf = s;
	while(i < n){
		if(buf[i] == (char)c){
			return (void *)buf;
		}
		i++;
	}
	return 0;
}
