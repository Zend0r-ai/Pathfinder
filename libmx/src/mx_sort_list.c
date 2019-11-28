#include "libmx.h"

static void swap(void **d1, void **d2) {
    void *temp = *d1;
    *d1 = *d2;
    *d2 = temp;
}

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *, void *)) {
    if (list && cmp)
        for (t_list *node1 = list; node1; node1 = node1->next)
            for (t_list *node2 = list; node2->next; node2 = node2->next)
                if (cmp(node2->data, node2->next->data))
                    swap(&node2->data, &node2->next->data);
    return list;
}
