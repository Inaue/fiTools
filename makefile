all: savingInt

savingInt: savingInt.o
	gcc -o savingInt savingInt.o

savingInt.o: savingInt.c
	gcc -c savingInt.c

clean:
	rm -rf *.o *~ savingInt
clean:
