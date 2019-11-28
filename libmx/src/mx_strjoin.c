#include "libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    if (s1 == NULL && s2 != NULL)
        return mx_strdup(s2);
    else if (s1 != NULL && s2 == NULL)
        return mx_strdup(s1);
    if(!s1 || !s2)
        return NULL;
    char *buffer = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    if (buffer == NULL)
        return NULL;
    mx_strcpy(buffer, s1);
    mx_strcat(buffer, s2);
    return buffer;
}
