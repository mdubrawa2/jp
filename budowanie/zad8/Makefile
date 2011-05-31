CFLAGS = -Wall

full: testowy test

testowy : main.o lib.o
	gcc -o testowy main.o lib.o -lm

main.o : main.c definicje.h

clean:
	rm -f *.o testowy *~
test:
	echo "1 2 3" > test1.in
	echo "-1 0 1" >test2.in
	./testowy < test1.in > wynik1.out
	./testowy < test2.in > wynik2.out
	rm *.in
	rm *.o
	rm *.out
