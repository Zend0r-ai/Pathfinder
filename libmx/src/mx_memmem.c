#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len){
    size_t i = 0;
    const char *str = (const char *)big;
    const char *ref = (const char *)little;
    if(little_len == 0)
        return (void *) str;
    while(*str && *ref && i < big_len) {
        if (*str++ == *ref)
        {
            ref++;
        }
        if(!*ref)
        {
            return (void *)(str - little_len);
        }
        if (little_len == (unsigned long)(ref - (const char *)little))
        {
            ref = (char *)little;
        }
        i++;
    }
    return NULL;
}
