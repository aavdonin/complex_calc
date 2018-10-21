#include <stdio.h>
#include "lib.h"

struct complex add(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real + b.real;
    c.imgry = a.imgry + b.imgry;
    return c;
}
struct complex sub(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real - b.real;
    c.imgry = a.imgry - b.imgry;
    return c;
}
struct complex mul(struct complex a, struct complex b) {
    struct complex c;
    c.real = (a.real*b.real - a.imgry*b.imgry);
    c.imgry = (a.real*b.imgry + b.real*a.imgry);
    return c;
}
struct complex div(struct complex a, struct complex b) {
    struct complex c;
    c.real = (a.real * b.real + a.imgry * b.imgry) / (b.real * b.real + b.imgry * b.imgry);
    c.imgry = (b.real * a.imgry - a.real * b.imgry) / (b.real * b.real + b.imgry * b.imgry);
    return c;
}

struct complex get_complex() {
    struct complex a;
    printf("Enter real and imaginary part of complex number:\n");
    printf("Real:      "); scanf("%f",&a.real);
    printf("Imaginary: "); scanf("%f",&a.imgry);
    return a;
}

void print_result(struct complex c) {
    printf("Result is: %.4f + %.4fi\n", c.real, c.imgry);
}
