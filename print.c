#include "print.h"
#include <stdio.h>
#include "library.h"
void pr(list *str){
    l *el = str -> head;
    el=el->next;
    printf("\"");
    while (el -> element != '\0') {
        printf("%c", (char)el -> element);
        el = el -> next;
    }
    printf("\"\n");
}
