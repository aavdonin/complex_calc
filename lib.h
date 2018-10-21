struct complex {float real; float imgry;};

struct complex add(struct complex a, struct complex b);
struct complex sub(struct complex a, struct complex b);
struct complex mul(struct complex a, struct complex b);
struct complex div(struct complex a, struct complex b);
struct complex get_complex();
void print_result(struct complex c);
