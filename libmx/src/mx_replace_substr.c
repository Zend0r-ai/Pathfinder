#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace){
    char *result;
    int i = 0;
    if(!str || !sub || !replace)
        return NULL;
    int count = mx_count_substr(str, sub);
    result = mx_strnew(mx_strlen(str) - mx_strlen(sub) * count + mx_strlen(replace) * count);
    while(*str){
        if(mx_strstr(str, sub) == str){
            mx_strcpy(&result[i], replace);
            i += mx_strlen(replace);
            str += mx_strlen(sub);
        } 
        else
            result[i++] = *str++;
    } 
    result[i] = '\0';
    return result;
}
