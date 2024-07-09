#include "PokemonExplosivo.hpp"
#include <iostream>
#include <string>

PokemonExplosivo::PokemonExplosivo(
  std::string nome, 
  std::string tipo_ataque, 
  double forca_ataque,
  double temperatura_explosao
) :
  Pokemon(nome, tipo_ataque, forca_ataque),
  _temperatura_explosao(temperatura_explosao){
    set_dano(calcular_dano());
  }

void PokemonExplosivo::falar_tipo_ataque() {
  Pokemon::falar_tipo_ataque();
  std::cout << "Boom!" << std::endl;
}

double PokemonExplosivo::calcular_dano() {
  return _forca_ataque/_temperatura_explosao;
}