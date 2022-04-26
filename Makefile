CC=g++
CFLAGS=-c -Wall --std=c++14
EXECUTABLE=buf_print
SRCDIR=./src/

all: main

main: main.o buf_print.o
	$(CC) main.o buf_print.o -o $(EXECUTABLE)

main.o: $(SRCDIR)main.cpp
	$(CC) $(CFLAGS) $(SRCDIR)main.cpp

buf_print.o: $(SRCDIR)buf_print.hpp $(SRCDIR)buf_print.cpp
	$(CC) $(CFLAGS) $(SRCDIR)buf_print.hpp $(SRCDIR)buf_print.cpp

clean:
	rm -rf *.o $(SRCDIR)*.gch $(EXECUTABLE)
