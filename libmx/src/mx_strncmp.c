#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, int n) {
    int i = 1;
    while(*s1 && *s2 && i < n){
        if(*s1 != *s2)
            break;
        s1++;
        s2++;
        i++;
    }
    return *(char *)s1 - *(char *)s2;
}
