#include "libmx.h"

double mx_pow(double n, unsigned int pow){
	double res = 1.0;
	while(pow-- > 0){
		res *= n;
	}
	return res;
}
