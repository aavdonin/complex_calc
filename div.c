#include "lib.h"

struct complex div(struct complex a, struct complex b) {
    struct complex c;
    c.real = (a.real * b.real + a.imgry * b.imgry) / (b.real * b.real + b.imgry * b.imgry);
    c.imgry = (b.real * a.imgry - a.real * b.imgry) / (b.real * b.real + b.imgry * b.imgry);
    return c;
}
