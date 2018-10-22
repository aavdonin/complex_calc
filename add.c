#include "lib.h"

struct complex add(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real + b.real;
    c.imgry = a.imgry + b.imgry;
    return c;
}
