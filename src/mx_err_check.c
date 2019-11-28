#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

void mx_err_check(int argc, char *argv[]){
	char *str;
	int fd;
	int bt;

	if(argc != 2)
		mx_err(1, argv[1], 1); 
	fd = open(argv[1], O_RDONLY);
	if(open(argv[1], O_RDONLY) == -1)
		mx_err(2, argv[1], 1);
	if(read(fd, NULL, 1) == '\0'){
		mx_err(3, argv[1], 1);
	}
	bt = mx_read_line(&str, 1, '\n', fd);
	if(!mx_isnum(str) || bt == 0) 
		mx_err(4, NULL, 0);
}
