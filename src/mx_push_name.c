#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

void mx_push_name(t_namelist **name, char *str, int *c){
	if(mx_is_uniqueness(name, str)){
		mx_push_isl(name, str);
    	(*c)++;
	}
	else
		mx_strdel(&str);
}
