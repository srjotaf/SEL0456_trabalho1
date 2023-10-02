all: arrays

arrays: arrays.o criar_vetor.o adicionar_elemento.o remover_elemento.o
	gcc -o arrays arrays.o criar_vetor.o adicionar_elemento.o remover_elemento.o

arrays.o: arrays.c
	gcc -c arrays.c

criar_vetor.o: criar_vetor.c 
	gcc -c criar_vetor.c

adicionar_elemento.o: adicionar_elemento.c 
	gcc -c adicionar_elemento.c

remover_elemento.o: remover_elemento.c 
	gcc -c remover_elemento.c
	
clean:
	rm -rf *.o arrays
