all: main

main: main.o criar_vetor.o adicionar_elemento.o remover_elemento.o
	gcc -o main main.o criar_vetor.o adicionar_elemento.o remover_elemento.o

main.o: main.c
	gcc -c main.c

criar_vetor.o: criar_vetor.c 
	gcc -c criar_vetor.c

adicionar_elemento.o: adicionar_elemento.c 
	gcc -c adicionar_elemento.c

remover_elemento.o: remover_elemento.c 
	gcc -c remover_elemento.c
	
clean:
	rm -rf *.o main
