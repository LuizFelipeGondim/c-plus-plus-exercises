#ifndef POKEMONEXPLOSIVO_H
#define POKEMONEXPLOSIVO_H

#include "Pokemon.hpp"
#include <string>

class PokemonExplosivo : public Pokemon {
  private:
    double _temperatura_explosao;
    
  public:
    PokemonExplosivo(
      std::string nome, 
      std::string tipo_ataque, 
      double forca_ataque,
      double temperatura_explosao
    );
    
    void falar_tipo_ataque() override;
    double calcular_dano() override;
};

#endif