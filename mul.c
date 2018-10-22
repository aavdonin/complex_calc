#include "lib.h"

struct complex mul(struct complex a, struct complex b) {
    struct complex c;
    c.real = (a.real*b.real - a.imgry*b.imgry);
    c.imgry = (a.real*b.imgry + b.real*a.imgry);
    return c;
}
