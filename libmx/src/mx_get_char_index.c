#include "libmx.h"

int mx_get_char_index(const char *str, char c){
	int ind = 0;
	if(!str)
		return -2;
	while(*str){
		if(*str == c){
			return ind;
		}
		ind++;
		str++;
	}
	return -1;
}
