CC=g++
CFLAGS=-Wall -std=c++11

all: vpl_execution

obj/Banco.o: src/Banco.cpp include/Banco.hpp
	${CC} ${CFLAGS} -Iinclude -c src/Banco.cpp -o obj/Banco.o

obj/ContaBancaria.o: src/ContaBancaria.cpp include/ContaBancaria.hpp
	${CC} ${CFLAGS} -Iinclude -c src/ContaBancaria.cpp -o obj/ContaBancaria.o

obj/main.o: src/main.cpp include/Banco.hpp include/ContaBancaria.hpp
	${CC} ${CFLAGS} -Iinclude -c src/main.cpp -o obj/main.o

vpl_execution: obj/Banco.o obj/ContaBancaria.o obj/main.o
	${CC} obj/Banco.o obj/ContaBancaria.o obj/main.o -o vpl_execution

clean:
	rm -f vpl_execution obj/*.o
