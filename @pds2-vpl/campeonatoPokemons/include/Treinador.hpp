#ifndef TREINADOR_H
#define TREINADOR_H

#include "Pokemon.hpp"
#include <string>
#include <vector>

class Treinador {
  private:
    std::string _nome;
    std::vector<Pokemon*> _pokemons;

  public:
    Treinador(std::string nome);
    ~Treinador();
    
    void cadastrar_pokemon_eletrico(
      std::string nome, 
      std::string tipo_ataque, 
      double forca_ataque, 
      double potencia_raio
    );
    void cadastrar_pokemon_aquatico(
      std::string nome, 
      std::string tipo_ataque, 
      double forca_ataque, 
      double litros_jato
    );
    void cadastrar_pokemon_explosivo(
      std::string nome, 
      std::string tipo_ataque, 
      double forca_ataque, 
      double temperatura_explosao
    );

    Pokemon* usar_pokemon(int idpk);
    void imprimir_informacoes();
    std::string pegar_nome();
};

#endif