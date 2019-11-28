#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	if(!hex)
		return 0;
	int iter = 0;
	unsigned long res = 0;
	int len = mx_strlen(hex);
	int k = 0;
	while(len >= 0) {
		len--;
		iter++;
	 	if((hex[len] > 47 && hex[len] < 58))
			k = hex[len] - 48;
		else if(hex[len] > 64 && hex[len] < 71)
			k = hex[len] - 55;
		else if(hex[len] > 96 && hex[len] < 103)
			k = hex[len] - 87;
		else continue;
		res += mx_pow(16, iter - 1) * k;
	}
	return res;
}
