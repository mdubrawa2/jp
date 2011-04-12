CFLAGS= -Wall -ansi

testowy: main.o lib.o
	gcc -o testowy main.o lib.o

main.o: main.c lib.h

lib.o: lib.c

clean:
	rm -f *.o testowy *~
 
test:
	./testowy dane1
	./testowy dane12
