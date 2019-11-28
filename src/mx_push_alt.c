#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

void mx_push_alt(t_islR *out, char *name, t_islR *alt1, t_islR *alt2){
	t_islR *buf = (t_islR *)malloc(sizeof(t_islR));
	t_islR *last;

    buf->cost = alt1->cost + alt2->cost;
	buf->way = mx_new_way(alt1->way, name);
    buf->cost_str = mx_new_cost_str(buf->cost_str, alt1, alt2);
    buf->next = NULL;
    if(out == NULL)
        out = buf;
    else {
        last = out;
        while(last->next != NULL)
            last = last->next;
        last->next = buf;
    }
}
