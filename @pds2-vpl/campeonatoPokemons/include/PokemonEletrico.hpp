#ifndef POKEMONELETRICO_H
#define POKEMONELETRICO_H

#include "Pokemon.hpp"
#include <string>

class PokemonEletrico : public Pokemon {
  private:
    double _potencia_raio;
    
  public:
    PokemonEletrico(
      std::string nome, 
      std::string tipo_ataque, 
      double forca_ataque,
      double potencia_raio
    );
    
    void falar_tipo_ataque() override;
    double calcular_dano() override;
};

#endif