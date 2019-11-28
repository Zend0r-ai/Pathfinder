#include "libmx.h"
char *mx_strcpy(char *dst, const char *src) {
	if(!dst || !src)
		return NULL;
    char *to = dst;
    while(*src)
    {
        *dst++ = *src++;
    }
    if(*src == '\0')
        *dst = '\0';
    return to;
}
