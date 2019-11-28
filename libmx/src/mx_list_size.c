#include "libmx.h"

int mx_list_size(t_list *list){
    int count = 0;
    if(list != NULL)
        if(list != NULL){
            count = 1;
            t_list *temp = list;
            while(temp->next != NULL){
                temp = temp->next;
                count++;
            }
        }
    return count;
}
