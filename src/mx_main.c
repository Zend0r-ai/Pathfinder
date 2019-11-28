#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

int main(int argc, char *argv[]){
	int fd;
	int rd;
	char *buf;
	int count;
	t_namelist *name = NULL;

	mx_err_check(argc, argv);
	fd = open(argv[1], O_RDONLY);
	mx_read_line(&buf, 1, '\n', fd);
	rd = fd;
	count = mx_atoi(buf);
	name = mx_check_isl(name, count, fd);
	mx_get_rel(name, count, argv[1]);
	mx_strdel(&buf);
	close(fd);
	return 0;
}
