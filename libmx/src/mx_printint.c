#include "libmx.h"

void mx_printint(int n) {
	int count; 
	int k = 1;
	unsigned int n1;
	if(n == 0)
		mx_printchar('0');
	if(n < 0) {
		mx_printchar('-');
		n = -n;
	}
	n1 = n;
	count = mx_count_digit(n1);
	while(count > 0) {
		for(int i = 1; i < count; i++)
			k *= 10;
		count--;
		mx_printchar(n1 / k + 48);
		n1 %= k;
		k = 1;
	}
}
