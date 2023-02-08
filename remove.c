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
    while (nbase != NULL) {
        if ((base ->element == ' ') && (nbase ->element == ' ')) {
            str -> len--;
            base ->next=nbase->next;
            nbase=nbase->next;

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
    }
    if (temp != NULL)
        free(temp);
    if (str != NULL)
        free(str);
}
/*l *last( struct l *head) {
    l* tmp;
    tmp=head->next;
        while ((tmp != NULL) && (tmp))  {
            tmp = tmp->next;
        }


    return tmp;
}
 */
list *last (list *str) {
    l *base = str ->head;
    l *nbase = str ->head ->next;
    int len = 0;
    while (nbase != NULL) {
        if (base->element != ' ') {
            str->len--;
            base ->next=nbase->next;
            nbase=nbase->next;
        }
        if (base ->element == ' '){
            while (nbase->element != '\0'){
                if (nbase->element == ' '){
                    break;
                }
                base =base ->next;
                nbase = nbase->next;
            }
        }
            base =base ->next;
            nbase = nbase->next;
            /*len++;
            if (nbase->element == ' ') {
                break;
            }
            if (nbase->element == '\0') {
                break;
            }
            base = base->next;
            nbase = nbase->next;


        }

            str -> len--;
            base ->next=nbase->next;
            nbase=nbase->next;
*/

        }

    return str;


}
list *change  (list *str) {
    l *base = str->head;
    l *nbase = str->head->next;
    int len = 0;
    int len1 = 0;
    len = str->len;
    len1 = str->len;
        while (nbase != NULL) {
            if (base->element != ' ') {
                base ->next=nbase->next;
                nbase=nbase->next;
            }
            if (base ->element == ' '){
                while (nbase->element != '\0'){
                    if (nbase->element == ' '){
                        break;
                    }
                    len++;
                    base =base ->next;
                    nbase = nbase->next;
                }
            }
            base =base ->next;
            nbase = nbase->next;
    }
        while (nbase != NULL) {
            if (base->element != ' ') {
                base ->next=nbase->next;
                nbase=nbase->next;
            }
            if (base ->element == ' ') {
                if (nbase->element == '\0') break;
                while (nbase->element != ' ') {


                    base = base->next;
                    nbase = nbase->next;
                }
            }

            base =base ->next;
            nbase = nbase->next;

        }


    return str;


