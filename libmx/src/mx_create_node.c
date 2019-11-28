#include "libmx.h"

t_list *mx_create_node(void *data){
	t_list *buf = (t_list *)malloc(sizeof(t_list));
	if(buf == NULL)
		return NULL;
	buf->data = data;
	buf->next = NULL;
	return buf;
}
