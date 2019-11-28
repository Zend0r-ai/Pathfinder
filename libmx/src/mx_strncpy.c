#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len){
	char *buf = dst;
	while(*src && len) {
		*buf++ = *src++;
		len--;
	}
	while(!*src && len){
		*buf++ = '\0';
		len--;
		src++;
	}
	return dst;
}
