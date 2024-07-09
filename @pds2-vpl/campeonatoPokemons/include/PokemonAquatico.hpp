#ifndef POKEMONAQUATICO_H
#define POKEMONAQUATICO_H

#include "Pokemon.hpp"
#include <string>

class PokemonAquatico : public Pokemon {
  private:
    double _litros_jato;
    
  public:
    PokemonAquatico(
      std::string nome, 
      std::string tipo_ataque, 
      double forca_ataque,
      double litros_jato
    );
    
    void falar_tipo_ataque() override;
    double calcular_dano() override;
};

#endif