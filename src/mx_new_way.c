#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

char *mx_new_way(char *s1, char *s2){
	char *buf;
	
	buf = mx_strjoin(s1, " -> ");
	buf = mx_strjoin(buf, s2);
	return buf;
}
