all: ccalc

ccalc: main.o lib.o liboper.a
	gcc main.o lib.o -L. -loper -o ccalc

main.o: main.c
	gcc -c main.c

lib.o: lib.c
	gcc -c lib.c

liboper.a: add.o sub.o mul.o div.o
	ar cr liboper.a add.o sub.o mul.o div.o

add.o: add.c
	gcc -c add.c

sub.o: sub.c
	gcc -c sub.c

mul.o: mul.c
	gcc -c mul.c

div.o: div.c
	gcc -c div.c

clean:
	rm -rf *.o *.a ccalc

