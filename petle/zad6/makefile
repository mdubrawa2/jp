CFLAGS= -Wall -ansi

testowy: main.o lib.o
	gcc -o testowy main.c lib.c

main.o: main.c lib.h

lib.o: lib.c

clean:
	rm -f *.o testowy *~

test:
	echo "4 *">1.in
	echo "6 &">2.in
	echo "10 %">3.in
	echo "8 ' ">4.in
	./testowy<1.in
	./testowy<2.in
	./testowy<3.in
	./testowy<4.in	
	rm -f *.in
