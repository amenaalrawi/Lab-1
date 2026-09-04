main: main.o
	gcc main.o -o main

main.o: main.c student.h status.h
	gcc -c main.c

clean:
	rm main
