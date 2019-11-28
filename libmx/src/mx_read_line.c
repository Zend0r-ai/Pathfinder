#include "libmx.h"

int mx_read_line(char **lineptr, int buf_size, char delim, const int fd) {
    static char *remain = NULL;
    int bytes = 0;
    if (!lineptr)
        return -2;
    *lineptr = (remain) ? remain : NULL;
    remain = NULL;
    for (char buf[buf_size + 1], *temp; (bytes = read(fd, buf, buf_size)) >= 0; ) {
        buf[bytes] = '\0';
        temp = *lineptr;
        *lineptr = mx_strjoin(*lineptr, buf);
        free(temp);
        if ((temp = mx_strchr(*lineptr, delim))) {
            *temp = '\0';
            remain = mx_strdup(temp + 1);
            temp = *lineptr;
            *lineptr = mx_strdup(*lineptr);
            free(temp);
        }
        if (!bytes || remain)
            break;
    }
    return (bytes < 0) ? (bytes == -1 ? -1 : -2) : mx_strlen(*lineptr);
}
