#include <iostream>
#include "Campeonato.hpp"
#include "Pokemon.hpp"
#include "Treinador.hpp"
//#include "avaliacao_basica_pokemon.hpp" é do vpl

#include <string>

int main() {
  Campeonato campeonato;
  char option;

  while ((std::cin >> option) && option != EOF) {
    if(option == 't') {
			std::string nome;
			std::cin >> nome;
      campeonato.cadastrar_treinador(nome);
      continue;
    }

    if(option == 'i') {
			int idt;
			std::cin >> idt;
			campeonato.imprimir_informacoes_treinador(idt);
      continue;
    }

    if(option == 'e') {
			int idt;
			std::string nome, tipo_ataque; 
      double forca_ataque, potencia_raio;
			std::cin >> idt >> nome >> tipo_ataque >> forca_ataque >> potencia_raio;
			campeonato.cadastrar_pokemon_eletrico(
				idt,
				nome,
				tipo_ataque,
				forca_ataque,
				potencia_raio
			);
      continue;
    }

    if(option == 'q'){
			int idt;
			std::string nome, tipo_ataque; 
      double forca_ataque, litros_jato;
			std::cin >> idt >> nome >> tipo_ataque >> forca_ataque >> litros_jato;
			campeonato.cadastrar_pokemon_aquatico(
				idt,
				nome,
				tipo_ataque,
				forca_ataque,
				litros_jato
			);
      continue;
    }

    if(option == 'x') {
			int idt;
			std::string nome, tipo_ataque; 
      double forca_ataque, temperatura_explosao;
			std::cin >> idt >> nome >> tipo_ataque >> forca_ataque >> temperatura_explosao;
			campeonato.cadastrar_pokemon_explosivo(
				idt,
				nome,
				tipo_ataque,
				forca_ataque,
				temperatura_explosao
			);
      continue;
    }

    if(option == 'h') {
			int idt1, idpk1, idt2, idpk2;
			std::cin >> idt1 >> idpk1 >> idt2 >> idpk2;
			campeonato.executar_batalha(idt1, idpk1, idt2, idpk2); 
      continue;
    }

    if(option == 'b') {
      //avaliacao_basica();
      continue;
    }
  }
    return 0;
}