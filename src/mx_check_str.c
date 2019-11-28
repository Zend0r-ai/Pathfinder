#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

bool mx_check_str(char *str){
	int i;
	int j;
	int k;

	for(i = 0; *str++ != '-'; i++)
		if(!mx_isalpha(*(str - 1)))
			return false;
	for(j = 0; *str++ != ','; j++)
		if(!mx_isalpha(*(str - 1)))
			return false;
	for(k = 0; *str++ != '\0'; k++)
		if(!mx_isdigit(*(str - 1)))
			return false;
	if(i == 0 || j == 0 || k == 0)
		return false;
	return true;
}
