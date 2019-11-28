#ifndef PATHFINDER_H
#define PATHFINDER_H
#include <stdbool.h>
#include <unistd.h>

#define INF 2147483647

typedef struct islRelation{
	char *way;
	char *cost_str;
	long cost; 
	struct islRelation *next;
}t_islR;

typedef struct name{
	char *name;
}t_name;

typedef struct nameList{
	char *name;
	struct nameList *next;
}t_namelist;

void mx_printerr(const char *s);
void mx_error(int type, char *filename, int num_line);
bool mx_isnum(char *s);
void mx_output(t_islR *out, char *name1, char *name2);
char *mx_new_way(char *s1, char *s2);
char *mx_new_cost_str(char *cost_str, t_islR *alt1, t_islR *alt2);
void mx_push_alt(t_islR *out, char *name, t_islR *alt1, t_islR *alt2);
void mx_add(t_islR *out, char *name, t_islR *alt1, t_islR *alt2);
void mx_push_alt_way(t_islR *out, char *name, t_islR *alt1, t_islR *alt2);
void mx_push_final_isl(t_islR *out, char *name);
void mx_algorithm(int n, t_islR arr[n][n], t_name name[n]);
void mx_get_rel(t_namelist *namelist, int count, char *fn);
void mx_get_matrix(t_namelist *namelist, int count, int fd);
bool mx_check_way(char *name_i, char *name_j, char *arr_i, char *arr_j);
t_namelist *mx_check_isl(t_namelist *name, int count, int fd);
t_namelist *mx_get_name_list(t_namelist *name, int *c, char *str);
void mx_push_name(t_namelist **name, char *str, int *c);
void mx_push_isl(t_namelist **list, void *data);
t_namelist *mx_create_isl(void *data);
bool mx_is_uniqueness(t_namelist **name, char *str);
bool mx_check_str(char *str);
void mx_err_check(int argc, char *argv[]);
void mx_err(int type, char *filename, int num_line);

#endif
