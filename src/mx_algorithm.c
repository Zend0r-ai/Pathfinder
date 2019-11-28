#include "./inc/pathfinder.h"
#include "./libmx/inc/libmx.h"

void mx_algorithm(int n, t_islR arr[n][n], t_name name[n]){
	for(int k = 0; k < n; k++) 
		for(int i = 0; i < n; i++) 
			for(int j = 0; j < n; j++) {
				if(k != i && k != j){
					if(arr[i][j].cost > (arr[i][k].cost + arr[k][j].cost))
						mx_add(&arr[i][j], name[k].name, &arr[i][k], &arr[k][j]);
					else if(arr[i][j].cost == (arr[i][k].cost + arr[k][j].cost))
						mx_push_alt_way(&arr[i][j], name[k].name, &arr[i][k], &arr[k][j]);
				}
			}
	for(int i = 0; i < n; i++) 
		for(int j = 0; j < n; j++)
			mx_push_final_isl(&arr[i][j], name[j].name);
	for(int i = 0; i < n; i++)
	 	for(int j = i + 1; j < n; j++)
			mx_output(&arr[i][j], name[i].name, name[j].name);
}
