#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int left, right, mid;
	left = 0;
	right = size - 1;
	(*count) = 0;
	while(1){
		(*count)++;
		mid = left + (right - left) / 2;
		if(mx_strcmp(arr[mid], s) > 0)
			right = mid - 1;
		else if(mx_strcmp(arr[mid], s) < 0)
			left = mid + 1;
		else
			return mid;
		if(left > right){
			(*count) = 0;
			return -1;
		}
	}
	return mid;
}
