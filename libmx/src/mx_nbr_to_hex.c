#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr){
	unsigned long quotient = nbr;;
	int count = mx_count_digit(nbr);
	int temp;
	char *res =(char *)malloc(count + 1 * sizeof(char));
	char *to = res;
	while(quotient != 0) {
		temp = quotient % 16;
		if(temp < 10)
			temp = temp + 48; 
		else
			temp = temp + 87;
		*res++ = temp;
		quotient = quotient / 16;
	}
	*res++ = '\0';
	mx_str_reverse(to);
	return to;
}
