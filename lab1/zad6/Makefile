CFLAGS = -Wall

full : testowy test sprawdzenie

testowy : program.o wczytaj.o pierwiastek.o
	gcc -o testowy program.o wczytaj.o pierwiastek.o -lm

program.o : program.c definicje.h

clean :
	rm -f *.o testowy *~ wynik1

test: 
	./testowy < test1 > wynik1

sprawdzenie: 
	./wynik_dobry.sh
