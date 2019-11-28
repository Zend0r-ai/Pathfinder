#include "libmx.h"

static size_t getsize(void *p){
	size_t *in = p;
	if(in){
		--in;
		return *in;
	}
	return -1;
}

void *mx_realloc(void *ptr, size_t size){
	void *buf;
	int memsize;
	memsize = getsize(ptr);
	if((int)size <= memsize)
		return ptr;
	buf = malloc(size);
	free(ptr);
	return buf;
}
