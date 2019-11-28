#include "libmx.h"

size_t mx_each_max(size_t s1, size_t s2){
	return ((s1 < s2) ? s2 : s1);
}
