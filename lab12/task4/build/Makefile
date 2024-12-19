.PHONY: clean start

pipefunctions.o: pipes.h read_pipe.c write_pipe.c
	gcc -c read_pipe.c write_pipe.c
	
	

background.o: background.h background.c
	gcc -c background.c 


mfile: main.c background.o write_pipe.o read_pipe.o
	gcc main.c read_pipe.o write_pipe.o background.o -o mfile



start: mfile
	./mfile

clean:
	rm -rf *.o main
