#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

t_namelist *mx_check_isl(t_namelist *name, int count, int fd){
	char *buf = NULL;
	int lines = 2;
	int bt;
	int c = 0;

	while((bt = mx_read_line(&buf, 1, '\n', fd)) != -1){
		if(bt == 0){
			if(mx_read_line(&buf, 1, '.', fd) == 0)
				break;
			mx_err(5, NULL, lines);
		}
		else if(!mx_check_str(buf))
			mx_err(5, NULL, lines);
		lines++;
		name = mx_get_name_list(name, &c, buf);
		mx_strdel(&buf);
	}
	if(c != count)
		mx_err(6, NULL, 0);
	return name;
}
