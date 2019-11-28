#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int w = 0;
    int in_w = 0;
    if(!str)
        return -1;
    while(*str) {
        if(*str != c && in_w == 0)
            in_w = 1;
        if(*str == c && in_w == 1){
            w++;
            in_w = 0;
        }
        str++;
    }
    if(in_w == 1)
        w++;
    return w;
}
