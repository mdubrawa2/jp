CFLAGS = -Wall

full: testowy test

testowy: main.o lib.o
	gcc -o testowy main.o lib.o

main.o : main.c lib.h

lib.o : lib.c lib.h

clean:
	rm -f *.o testowy *~

test: 
	echo "09-04-1991" >1.in
	echo "14-03-2011" >2.in
	echo "13-03-2011" >3.in
	echo "14-03-2010" >4.in
	echo "09/04/1991" >5.in
	./testowy < 1.in
	./testowy < 2.in
	./testowy < 3.in
	./testowy < 4.in
	./testowy < 5.in
	rm *.in
