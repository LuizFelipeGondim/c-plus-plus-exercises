CC=g++
CFLAGS=-Wall -std=c++11

all: exec

obj/Treinador.o: src/Treinador.cpp include/Treinador.hpp
	${CC} ${CFLAGS} -Iinclude -c src/Treinador.cpp -o obj/Treinador.o

obj/PokemonExplosivo.o: src/PokemonExplosivo.cpp include/PokemonExplosivo.hpp
	${CC} ${CFLAGS} -Iinclude -c src/PokemonExplosivo.cpp -o obj/PokemonExplosivo.o

obj/PokemonEletrico.o: src/PokemonEletrico.cpp include/PokemonEletrico.hpp
	${CC} ${CFLAGS} -Iinclude -c src/PokemonEletrico.cpp -o obj/PokemonEletrico.o

obj/PokemonAquatico.o: src/PokemonAquatico.cpp include/PokemonAquatico.hpp
	${CC} ${CFLAGS} -Iinclude -c src/PokemonAquatico.cpp -o obj/PokemonAquatico.o

obj/Campeonato.o: src/Campeonato.cpp include/Campeonato.hpp
	${CC} ${CFLAGS} -Iinclude -c src/Campeonato.cpp -o obj/Campeonato.o

obj/Pokemon.o: src/Pokemon.cpp include/Pokemon.hpp
	${CC} ${CFLAGS} -Iinclude -c src/Pokemon.cpp -o obj/Pokemon.o

obj/main.o: src/main.cpp
	${CC} ${CFLAGS} -Iinclude -c src/main.cpp -o obj/main.o

exec: obj/Treinador.o obj/PokemonExplosivo.o obj/PokemonEletrico.o obj/PokemonAquatico.o obj/Campeonato.o obj/Pokemon.o obj/main.o
	${CC} obj/Treinador.o obj/PokemonExplosivo.o obj/PokemonEletrico.o obj/PokemonAquatico.o obj/Campeonato.o obj/Pokemon.o obj/main.o -o exec

clean:
	rm -f exec obj/*.o
