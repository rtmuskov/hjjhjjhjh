//
// Created by rtmus on 06.02.2023.
//
#include <stdlib.h>
#include <stdio.h>
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
/*list *last (list *str) {
    l *base = str ->head;
    l *nbase = str ->head ->next;
    int len = 0;
    while (nbase != NULL) {
        if (base->element != ' ' ) {
            len++;
        }
        else { len = 0;
        }
        base ->next=nbase->next;
        nbase=nbase->next;
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


        }

    return str;
*/

/*list *change  (list *str) {
    l *base = str->head;
    l *nbase = str->head->next;
    int len = 0;
    int len1 = 0;
    len = str->len;
    len1 = str->len;
    while (nbase != NULL) {
        if (base->element != ' ') {
            base->next = nbase->next;
            nbase = nbase->next;
        }
        if (base->element == ' ') {
            while (nbase->element != '\0') {
                if (nbase->element == ' ') {
                    break;
                }
                len++;
                base = base->next;
                nbase = nbase->next;
            }
        }
        base = base->next;
        nbase = nbase->next;
    }
    while (nbase != NULL) {
        if (base->element != ' ') {
            base->next = nbase->next;
            nbase = nbase->next;
        }
        if (base->element == ' ') {
            if (nbase->element == '\0') break;
            while (nbase->element != ' ') {


                base = base->next;
                nbase = nbase->next;
            }
        }

        base = base->next;
        nbase = nbase->next;

    }


    return str;
}
 */
    int last (list *str) {
        l *base = str ->head;
        l *nbase = str ->head ->next;
        int len=0;
        while (nbase != NULL) {
            if (base->element == ' ') {
                while (nbase->element != '\0') {
                    if (nbase->element == ' ') {
                        break;
                    }
                    base = base->next;
                    nbase = nbase->next;
                    len++;
                }

            } else {
                len = 0;
            }
            base = base->next;
            nbase = nbase->next;
        }
            return str;
        }
list *change (list *str) {
    l *base = str->head;
    l *nbase = str->head->next;
    l *base1 = str->head;
    l *nbase1 = str->head->next;
    l *start;
    l *end;
    int len = 0;
    int len1 = 0;
    while ((nbase != NULL)) {
        if (base->element == ' ') {
            while (nbase->element != '\0') {
                if (nbase->element == ' ') {
                    len = 0;
                    break;
                }
                base = base->next;
                nbase = nbase->next;
                len++;

}

        } else {
            len = 0;
        }
        base = base->next;
        nbase = nbase->next;
    }
    while (nbase1 != NULL) {
        if (base1->element == ' ') {
            start = base1;
            while ((nbase1->element != ' ')) {
                if (nbase1->element == '\0') {
                    break;
                }
                base1 = base1->next;
                nbase1 = nbase1->next;
                len1++;
            }

        } else {
            len1 = 0;
        }
        if (len1 < len) {
            end = base1;

            if (start != NULL) start->next = end;
        }

        if (len1 >= len) {

        }
        if (nbase1 == NULL) {
            break;
        }

        base1 = base1->next;
        nbase1 = nbase1->next;
        len1 = 0;
    }
    return str;
    }


/*list *change(list *str) {
    l *now = str->head->next;
    l *prev = str->head;
    l *word;
    l *end;
    int len_last = 0;
    int len = 0;
    while (now != NULL) {
        if (prev->element == ' ') {
            while (now->element != '\0') {
                if (now->element == ' ') {
                    len_last = 0;
                    break;
                }
                prev = prev->next;
                now = now->next;
                len_last++;
            }
        } else {
            prev = prev->next;
            now = now->next;
        }
    }
    now = str->head->next;
    prev = str->head;
    word =prev;
    while (now != NULL) {
        if (prev->element == ' ') {
            word = prev;
            while ((now->element != ' ')) {
                if (now->element == '\0') {
                    len = 0;
                    break;
                }
                prev = prev->next;
                now = now->next;
                len++;
            }

            end = prev;

        } else {
            len = 0;
        }
        if (len < len_last) {
            word->next = now;
        }
        if ((len>=len_last) && (now!=NULL)){
            break;

        }
        prev = prev->next;
        now = now->next;
        len = 0;
    }
    return str;
}
 */