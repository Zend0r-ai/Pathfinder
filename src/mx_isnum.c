#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

bool mx_isnum(char *s){
	while(*s){
		if(!mx_isdigit(*s))
			return false;
		s++;
	}
	return true;
}
