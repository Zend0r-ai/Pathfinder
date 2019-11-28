#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n){
	const char *buf1 = (const char *)s1;
	const char *buf2 = (const char *)s2;
	unsigned int i = 0;
	while(*buf1 && *buf2 && i < n) {
		if(*buf1 != *buf2)
			break;
		buf1++;
		buf2++;
		i++;
	}
	return *(const unsigned char *)buf1 - *(const unsigned char *)buf2;
}
