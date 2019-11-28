#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

void mx_push_isl(t_namelist **list, void *data){
	t_namelist *last;
    t_namelist *p = mx_create_isl(data);

    if ((p == NULL) || (list == NULL))
        return;
    p->name = data;
    p->next = NULL;
    if(*list == NULL)
        *list = p;
    else {
        last = *list;
        while(last->next != NULL)
            last = last->next;
        last->next = p;
    }
}
