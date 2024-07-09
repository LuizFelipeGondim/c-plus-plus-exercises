#include "PokemonAquatico.hpp"
#include <iostream>
#include <string>

PokemonAquatico::PokemonAquatico(
  std::string nome, 
  std::string tipo_ataque, 
  double forca_ataque,
  double litros_jato
) :
  Pokemon(nome, tipo_ataque, forca_ataque),
  _litros_jato(litros_jato){
    set_dano(calcular_dano());
  }

void PokemonAquatico::falar_tipo_ataque() {
  Pokemon::falar_tipo_ataque();
  std::cout << "Splash!" << std::endl;
}

double PokemonAquatico::calcular_dano() {
  return _forca_ataque+_litros_jato;
}