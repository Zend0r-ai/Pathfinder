#include "libmx.h"

void mx_print_list(t_list *node) {
  while (node) {
    mx_printstr(node->data);
    mx_printstr("\n");
    node = node->next;
  }
}
