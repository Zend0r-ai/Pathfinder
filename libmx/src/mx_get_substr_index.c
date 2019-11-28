#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub){
    if(!str || !sub)
    	return -2;
    int len = mx_strlen(sub);
    int count = 1;
    char *s = (char *)str;
    char *r = (char *)sub;
    while(*s && *r) {
        if (*s++ == *r) {
            r++;
        	count--;
        }
        if(!*r)
            return count;
        if (len == (r - sub)) {
            r = (char *)sub;
        }
        count++;
    }
    return -1;
}
