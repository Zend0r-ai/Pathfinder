#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

char *mx_new_cost_str(char *cost_str, t_islR *alt1, t_islR *alt2){
	cost_str = mx_strnew(1);
    if(alt1->cost_str != NULL)
		cost_str = mx_strjoin(alt1->cost_str, " + ");
	if(mx_isnum(cost_str)){
		cost_str = mx_strjoin(cost_str, mx_itoa(alt1->cost));
		cost_str = mx_strjoin(cost_str, " + ");
	}
	cost_str = mx_strjoin(cost_str, mx_itoa(alt2->cost));
	return cost_str;
}
