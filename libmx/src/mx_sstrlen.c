#include "libmx.h"

size_t mx_sstrlen(const char *s){
	size_t len = 0;
	while(*s++)
		len++;
	return len;
}
