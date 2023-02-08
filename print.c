//
// Created by rtmus on 06.02.2023.
//

#include "print.h"
#include <stdio.h>
#include "library.h"
void pr(list *str){
    l *el = str -> head;
    printf("\"");
    while (el -> element != '\0') {
        printf("%c", (char)el -> element);
        el = el -> next;
    }
    printf("\"\n");
}

