#include "libmx.h"

char *mx_itoa(int number) {
	int k = 1;
	long n1 = number;
	n1 = (n1 < 0) ? -n1 : n1; 
	int count = mx_count_digit(n1); 
	char *res =(char *)malloc(count + 2 * sizeof(char));
	char *to = res;
	if(n1 == 0)
		*res++ = '0';
	if(number < 0)
		*res++ = '-';
	while(count > 0) {
		for(int i = 1; i < count; i++)
			k *= 10;
		count--;
		*res++ = (n1 / k + 48);
		n1 %= k;
		k = 1;
	}
	*res++ = '\0';
	return to;
}
