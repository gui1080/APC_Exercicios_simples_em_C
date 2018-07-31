# -*- Makefile -*-

exec: main.o funcoes.o
	gcc main.o funcoes.o -o exec

main.o: main.c headers.h
	gcc -c main.c

funcoes.o: funcoes.c headers.h
	gcc -c funoces.c

clean:
	rm *.o exec
