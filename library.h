#ifndef UNTITLED16_LIBRARY_H
#define UNTITLED16_LIBRARY_H
typedef struct l {
    char element;
    struct l *next;
} l;
typedef struct list {
    int len;
    l *head;
} list;

#endif //UNTITLED16_LIBRARY_H
