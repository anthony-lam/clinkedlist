all: linkedlist.o driver.o
	gcc -o run linkedlist.o driver.o

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

driver.o: driver.c linkedlist.h
	gcc -c driver.c