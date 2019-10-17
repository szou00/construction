all: main.o functions.o
	gcc -o program main.o struct.o

main.o: main.c functions.h
	gcc -c main.c

functions.o: struct.c
	gcc -c struct.c

run:
	./program

clean:
	rm *.o
	rm *~
