#include "libmx.h"

int mx_count_digit(unsigned int c) {
	int len = 0;
	while(c > 0) {
		c /= 10;
		len++;
	}
	return len;
}
