#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

static void first_push(t_islR *out, char *name){
	out->way = name;
	out->cost_str = NULL;	
	out->next = NULL;
}

static char **create_buf(char *str){
	char **arr;

	str = mx_replace_substr(str, "-", ",");
	str = mx_strjoin(str, ",");
	arr = mx_strsplit(str, ',');
	return arr;
}

void mx_get_matrix(t_namelist *namelist, int count, int fd){
	t_name name[count];
	char *buf;
	char **arr_buf;
	t_islR arr[count][count];

	for(int i = 0;i < count; namelist = namelist->next, i++)
		name[i].name = namelist->name;
	for(int i = 0; i < count; i++)
		for(int j = 0; j < count; j++)
			(i == j) ? (arr[i][j].cost = 0) : (arr[i][j].cost = INF);
	while((mx_read_line(&buf, 1, '\n', fd)) > 0) {
		arr_buf = create_buf(buf);
		for(int i = 0; i < count; i++)
			for(int j = 0; j < count; j++){
				if(mx_check_way(name[i].name, name[j].name, arr_buf[0], arr_buf[1]) && i != j)
					arr[i][j].cost = mx_atoi(arr_buf[2]);
				first_push(&arr[i][j], name[i].name);
			}
	}
	mx_algorithm(count, arr, name);
}
