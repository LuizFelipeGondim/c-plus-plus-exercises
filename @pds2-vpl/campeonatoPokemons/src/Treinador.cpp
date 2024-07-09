#include "Treinador.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonExplosivo.hpp"
#include <iostream>

#include <string>

Treinador::Treinador(std::string nome) : _nome(nome){}

Treinador::~Treinador(){
  for(auto& pokemon : _pokemons)
    delete pokemon;
}

void Treinador::cadastrar_pokemon_eletrico(
  std::string nome, 
  std::string tipo_ataque, 
  double forca_ataque, 
  double potencia_raio
){
  _pokemons.push_back(new PokemonEletrico(
    nome, 
    tipo_ataque, 
    forca_ataque, 
    potencia_raio
  ));
}
    
void Treinador::cadastrar_pokemon_aquatico(
  std::string nome, 
  std::string tipo_ataque, 
  double forca_ataque, 
  double litros_jato
){
  _pokemons.push_back(new PokemonAquatico(
    nome, 
    tipo_ataque, 
    forca_ataque, 
    litros_jato
  ));
}

void Treinador::cadastrar_pokemon_explosivo(
  std::string nome, 
  std::string tipo_ataque, 
  double forca_ataque, 
  double temperatura_explosao
){
  _pokemons.push_back(new PokemonExplosivo(
    nome, 
    tipo_ataque, 
    forca_ataque, 
    temperatura_explosao
  ));
}

Pokemon* Treinador::usar_pokemon(int idpk){
  return _pokemons[idpk];
}

void Treinador::imprimir_informacoes(){
  if(!_pokemons.empty()) {
    std::cout << "Nome: " << _nome << std::endl;
    std::cout << "----------" << std::endl; 

    for (Pokemon* pokemon : _pokemons){
      pokemon->imprimir_informacoes();
      std::cout << "----------" << std::endl;
    }
  } else {
    std::cout << "Nome: " << _nome << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "Nenhum Pokemon cadastrado!" << std::endl;
    std::cout << "----------" << std::endl; 
  }
}

std::string Treinador::pegar_nome(){
  return _nome;
}