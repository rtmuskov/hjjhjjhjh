#include <stdlib.h>
#include <string.h>
#include "remove.h"
#include "library.h"


void rmsp (list *str) {

    l *base = str->head;
    l *nbase = str->head->next;
    while (nbase != NULL) {
        if ((base->element == ' ') && (nbase->element == ' ')) {
            str->len--;
            base->next = nbase->next;
            nbase = nbase->next;

        } else {
            base = base->next;
            nbase = nbase->next;
        }
    }


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

size_t get_length(l* firstLetter) {
    l* currentNode = firstLetter;
    size_t length = 0;
    while (currentNode != NULL && currentNode->element != ' ') {
        length++;
        currentNode = currentNode->next;
    }
    return length;
}

size_t get_last_word_len(list* arr) {
    l* currentNode = arr->head;
    size_t curLen = 0;
    while (currentNode != NULL) {
        curLen++;
        if (currentNode->element == ' ')
            curLen = 0;
        currentNode = currentNode->next;
    }
    curLen--;
    return curLen;
}

void removeWord(l* beforeFirstLetter) {
    l* currentNode = beforeFirstLetter->next;
    while (currentNode != NULL && currentNode->element != ' ') {
        l* next = currentNode->next;
        free(currentNode);
        currentNode = next;
    }
    beforeFirstLetter->next = currentNode;
}

list* change (list* str) {
    size_t lastLength = get_last_word_len(str);

    l *newHead = calloc(1, sizeof(l));
    newHead->element = ' ';
    newHead->next = str->head;
    str->head = newHead;

    l *currentNode = str->head;
    while (currentNode != NULL) {
        if (currentNode->element == ' ') {
            size_t curLength = get_length(currentNode->next);
            if (curLength < lastLength)
                removeWord(currentNode);
        }
        currentNode = currentNode->next;
    }
    return str;
}
