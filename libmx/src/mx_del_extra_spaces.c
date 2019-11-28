#include "libmx.h"

char *mx_del_extra_spaces(const char *str){
	if(!str)
		return NULL;
	char *buf = mx_strtrim(str);
	int len = mx_strlen(buf);
	for(int k = 0; k < len; k++){
		if(mx_isspace(buf[k])){
			while(mx_isspace(buf[k + 1])){
				for(int j = k + 1; j < len; j++)
					buf[j] = buf[j + 1];
				buf[len] = '\0';
				len--;
			}
			buf[k] = ' ';
		}
	}
	return buf;
}
