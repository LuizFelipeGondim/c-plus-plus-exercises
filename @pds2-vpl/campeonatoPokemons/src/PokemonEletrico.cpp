#include "PokemonEletrico.hpp"
#include <iostream>
#include <string>

PokemonEletrico::PokemonEletrico(
  std::string nome, 
  std::string tipo_ataque, 
  double forca_ataque,
  double potencia_raio
) :
  Pokemon(nome, tipo_ataque, forca_ataque),
  _potencia_raio(potencia_raio){
    set_dano(calcular_dano());
  }

void PokemonEletrico::falar_tipo_ataque() {
  Pokemon::falar_tipo_ataque();
  std::cout << "Bzzzz!" << std::endl;
}

double PokemonEletrico::calcular_dano() {
  return _forca_ataque*_potencia_raio;
}