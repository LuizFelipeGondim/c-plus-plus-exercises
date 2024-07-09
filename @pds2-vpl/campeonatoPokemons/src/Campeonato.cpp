#include "Campeonato.hpp"
#include "Treinador.hpp"
#include <iostream>

#include <string>

Campeonato::~Campeonato(){
  for(auto& treinador : _treinadores)
    delete treinador;
}

void Campeonato::cadastrar_treinador(std::string nome){
  _treinadores.push_back(new Treinador(nome));
}

void Campeonato::cadastrar_pokemon_eletrico(
  int idt,
  std::string nome, 
  std::string tipo_ataque, 
  double forca_ataque, 
  double potencia_raio
){
  _treinadores[idt]->cadastrar_pokemon_eletrico(
    nome, 
    tipo_ataque, 
    forca_ataque, 
    potencia_raio
  );
}

void Campeonato::cadastrar_pokemon_aquatico(
  int idt,
  std::string nome, 
  std::string tipo_ataque, 
  double forca_ataque, 
  double litros_jato
){
  _treinadores[idt]->cadastrar_pokemon_aquatico(
    nome, 
    tipo_ataque, 
    forca_ataque, 
    litros_jato
  );
}

void Campeonato::cadastrar_pokemon_explosivo(
  int idt,
  std::string nome, 
  std::string tipo_ataque, 
  double forca_ataque, 
  double temperatura_explosao
){
  _treinadores[idt]->cadastrar_pokemon_explosivo(
    nome, 
    tipo_ataque, 
    forca_ataque, 
    temperatura_explosao
  );
}

void Campeonato::imprimir_informacoes_treinador(int idt){
  _treinadores[idt]->imprimir_informacoes();
}

void Campeonato::executar_batalha(int idt1, int idpk1, int idt2, int idpk2) {
  Pokemon* pokemon1 = _treinadores[idt1]->usar_pokemon(idpk1); 
  Pokemon* pokemon2 = _treinadores[idt2]->usar_pokemon(idpk2);

  std::cout << "### Batalha ###" << std::endl;
  std::cout << _treinadores[idt1]->pegar_nome();
  std::cout << " (" << pokemon1->pegar_nome() << ") ";
  std::cout << "vs. ";
  std::cout << _treinadores[idt2]->pegar_nome();
  std::cout << " (" << pokemon2->pegar_nome() << ")" << std::endl;

  pokemon1->atacar(pokemon2);
  pokemon2->imprimir_status();
  std::cout << "#########" << std::endl;
}