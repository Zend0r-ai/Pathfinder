#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

void mx_add(t_islR *out, char *name, t_islR *alt1, t_islR *alt2){
	out->cost = alt1->cost + alt2->cost;
	out->way = mx_new_way(alt1->way, name);
	out->cost_str = mx_new_cost_str(out->cost_str, alt1, alt2);
	while(alt1->next){
		alt1 = alt1->next;
		mx_push_alt(out, name, alt1, alt2);
		out = out->next;
	}
}
