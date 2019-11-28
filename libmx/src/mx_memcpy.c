#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n){
	const char *buf_s = (const char *)src;
	char *buf_d = (char *)dst;
	for(size_t i = 0; i < n; ++i){
		buf_d[i] = buf_s[i];
	}
	return dst;
}
