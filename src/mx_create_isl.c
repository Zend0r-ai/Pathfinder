#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

t_namelist *mx_create_isl(void *data){
	t_namelist *buf = (t_namelist *)malloc(sizeof(t_namelist));

	if(buf == NULL)
		return NULL;
	buf->name = data;
	buf->next = NULL;
	return buf;
}
