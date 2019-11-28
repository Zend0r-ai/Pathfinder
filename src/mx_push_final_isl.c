#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

void mx_push_final_isl(t_islR *out, char *name){
	while(out){
		out->way = mx_new_way(out->way, name);
		out = out->next;
	}
}
