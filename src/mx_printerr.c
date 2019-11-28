#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

void mx_printerr(const char *s){
	write(2, s, mx_strlen(s));
}
