all: compile link clean
compile:
	gcc -I/usr/include -c main.c
link:
	gcc main.o -o main -L/usr/lib64 -lcsfml-network -lcsfml-system 
clean:
	rm main.o
