//
// Created by rtmus on 06.02.2023.
//

#include "input.h"
#include "library.h"
#include <stdio.h>
#include <stdlib.h>
list *input(list *str){
    l *el = (l*) malloc(sizeof(l));
    str->head = el;
    str->len = 0;
    char t;
    while ((t = getchar())^EOF) {
        if (t == '\n')
            break;
        str->len++;
        el->element = t;
        l *nel = (l *) malloc(sizeof(l));
        el->next = nel;
        el = nel;
    }
    el->element = '\0';
    el->next = NULL;
    return str;
}