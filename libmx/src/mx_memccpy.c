#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n){
	unsigned int i = 0;
	char *buf_d = (char *) dst;
	const char *buf_s = (const char *)src;
	char *ptr = 0;
	while(i < n && ptr == 0){
		buf_d[i] = buf_s[i];
		if(buf_s[i] == (char)c)
			ptr = buf_d + i + 1;
		i++;
	}
	return (ptr);
}
