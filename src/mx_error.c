#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

void mx_error(int type, char *filename, int num_line){
	if(type == 1)
		mx_printerr("usage: ./pathfinder [filename]\n");
	else if(type == 2){
		mx_printerr("error: file ");
		mx_printerr(filename);
		mx_printerr(" does not exist\n");
	}
	else if(type == 3){
		mx_printerr("error: file ");
		mx_printerr(filename);
		mx_printerr(" is empty\n");}
	else if(type == 4)
		mx_printerr("error: line 1 is not valid\n");
	else if(type == 5){
		mx_printerr("error: line ");
		mx_printint(num_line);
		mx_printerr(" is not valid\n");
	}
	else if(type == 6)
		mx_printerr("error: invalid number of islands\n");
}
