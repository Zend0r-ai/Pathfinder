#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

bool mx_check_way(char *name_i, char *name_j, char *arr_i, char *arr_j){
	if((mx_strcmp(name_i, arr_i) == 0 && mx_strcmp(name_j, arr_j) == 0) ||
		(mx_strcmp(name_j, arr_i) == 0 && mx_strcmp(name_i, arr_j) == 0)){
		return true;
	}
	return false;
}
