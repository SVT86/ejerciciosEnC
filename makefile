CC=g++

seis.exe:	seis.o implementa.o
			${CC} seis.o implementa.o -o seis.exe
seis.o	:	seis.c
			${CC} -c seis.c -o seis.o
implementa.o:	implementa.c
				${CC} -c implementa.c -o implementa.o

clean:		
			rm *.o *.exe