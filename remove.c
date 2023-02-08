//
// Created by rtmus on 06.02.2023.
//
#include <stdlib.h>
#include <string.h>
#include "remove.h"
#include "library.h"
list *rmsp (list *str) {
    l *base = str ->head;
    l *nbase = str ->head ->next;
    l *t;
    while (nbase != NULL) {
        if ((base ->element == ' ') && (nbase ->element == ' ')) {
            str -> len--;
            t= base->next;
            base ->next=nbase->next;
            if(t != NULL)
                free(t);
        } else{
            base=base ->next;
            nbase=nbase->next;
        }
    }
    return str;


}
void fr(list *str) {
    l *base = str -> head;
    l *temp = NULL;
    while (base != NULL) {
        temp = base -> next;
        free (base);
        base = temp;
    }mj
    if (temp != NULL)
        free(temp);
    if (str != NULL)
        free(str);
}

