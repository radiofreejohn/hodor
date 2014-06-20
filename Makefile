CC=gcc
hodor: hodor.o
	$(CC) -o hodor hodor.o

clean:
	rm -rf hodor.o

