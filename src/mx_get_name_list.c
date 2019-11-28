#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

t_namelist *mx_get_name_list(t_namelist *name, int *c, char *str){
	char *buf = mx_replace_substr(str, "-", ",");
	char **arr = mx_strsplit(buf, ',');

	mx_push_name(&name, arr[0], c);
	mx_push_name(&name, arr[1], c);
	mx_strdel(&buf);
	return name;
}
