#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

static void print_start_n_end(char *name1, char *name2){
	mx_printstr("Path: ");
	mx_printstr(name1);
	mx_printstr(" -> ");
	mx_printstr(name2);
	mx_printstr("\n");
}

void mx_output(t_islR *out, char *name1, char *name2){
	while(out && out->cost != INF) {
		mx_printstr("========================================\n");
		print_start_n_end(name1, name2);
		mx_printstr("Route: ");
		mx_printstr(out->way);
		mx_printstr("\n");
		mx_printstr("Distanse: ");
		if(out->cost_str == NULL)
			mx_printint(out->cost);
		else{
			mx_printstr(out->cost_str);
			mx_printstr(" = ");
			mx_printint(out->cost);
		}
		mx_printstr("\n");
		mx_printstr("========================================\n");
		out = out->next;
	}
}
