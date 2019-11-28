#include "libmx.h"

char *mx_strtrim(const char *str){
    if(str == NULL)
        return NULL;
    int len = mx_strlen(str);
    char *buffer;
    while(mx_isspace(str[len - 1]))
        --len;
    while(*str && mx_isspace(*str)){
        str++;
        --len;
    }
    buffer = mx_strnew(len + 1);
    if (!buffer)
        return "\0";
    mx_strncpy(buffer, str, len);
    return buffer;
}
