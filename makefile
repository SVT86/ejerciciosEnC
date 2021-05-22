CC=g++

standar.exe:	standar.o
				${CC} standar.o -o standar.exe
standar.o:		standar.c
				${CC} -c standar.c -o standar.o

clean:			
				rm *.o *.exe *.txt