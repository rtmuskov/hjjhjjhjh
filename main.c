#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include "input.h"
#include "print.h"
#include "remove.h"

int main() {
    int len;
    list *str = (list*) malloc(sizeof(list));
    str = input(str);
    pr(str);

    str = change(str);
    str = rmsp(str);
    pr(str);
    fr(str);
    return 0;
}
