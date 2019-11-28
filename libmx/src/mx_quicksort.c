#include "libmx.h"

int mx_quicksort(char **arr, int left, int right) {  
	if(!arr)
		return -1;
	char *pivot = arr[left + (right - left) / 2];
	int l = left;
	int r = right;
	int steps = 1;
	while (l <= r){
		while((mx_strcmp(arr[l], pivot) < 0) && (l < right))
			l++;
		while((mx_strcmp(arr[r], pivot) > 0) && (r > left))
			r--;
		if(l <= r){
			mx_swapstr(&arr[l], &arr[r]);
			l++;
			r--;
		}
	}
	return steps += (l < right ? mx_quicksort(arr, l, right) : 0) 
	+ (left < r ? mx_quicksort(arr, left, r) : 0);
}
