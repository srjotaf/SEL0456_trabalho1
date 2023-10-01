all: arrays

arrays: arrays.o
	gcc arrays.o -o arrays

arrays.o: arrays.c
	gcc -c arrays.c
	
clean:
	rm -rf *.o arrays
