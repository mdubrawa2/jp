CFLAGS= -Wall -ansi

full: testowy test

testowy: main.o lib.o
	gcc -o testowy main.o lib.o

main.o: main.c lib.h

lib.o: lib.c lib.h

clean:
	rm -f *.o testowy *~
test:
	echo "0 0" >1.in
	echo "4 2">2.in
	echo "2 4">3.in
	echo "0 2">4.in
	./testowy<1.in
	./testowy<2.in
	./testowy<3.in
	./testowy<4.in
	rm *.in
