CFLAGS = -Wall

full : testowy test

testowy : program.o lib.o
	gcc -o testowy program.o lib.o -lm
program.o : program.c definicje.h

clean:
	rm -f *.o testowy *~ 
test : 

	echo "-1" > test1.in
	echo "0" > test2.in
	echo "4" > test3.in
	./testowy < test1.in > wynik1.out
	./testowy < test2.in > wynik2.out
	./testowy < test3.in > wynik3.out
	rm *.in
	rm *.out *.o
