#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim){
	int i = 0;
	if(arr && delim){
		while(*arr[i] != '\0'){
			mx_printstr(arr[i]);
			if(*arr[i + 1] != '\0')
				mx_printstr(delim);
			i++;
		}
	}
}
