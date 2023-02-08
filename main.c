#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include "input.h"
#include "print.h"
#include "remove.h"

int main() {
    list *str = (list*) malloc(sizeof(list));
    str = input(str);
    pr(str);
    str = rmsp(str);
    pr(str);
    fr(str);
    return 0;
}
