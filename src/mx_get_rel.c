#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

void mx_get_rel(t_namelist *namelist, int count, char *fn){
	char *buf;
	int fd;

	fd = open(fn, O_RDONLY);
	mx_read_line(&buf, 1, '\n', fd);
	mx_get_matrix(namelist, count, fd);
}
