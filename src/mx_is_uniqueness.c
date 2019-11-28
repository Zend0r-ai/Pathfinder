#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

bool mx_is_uniqueness(t_namelist **name, char *str){
	t_namelist *temp = *name;

    while(temp){
    	if(mx_strcmp(temp->name, str) == 0){
    		return false;
    	}
        temp = temp->next;
    }
	return true;
}

