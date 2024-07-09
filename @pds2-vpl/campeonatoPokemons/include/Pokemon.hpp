#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon {
  private:
    std::string _nome;
    std::string _tipo_ataque;
    double _dano; 
    double _energia = 100;

  protected:
    double _forca_ataque;

  public:
    Pokemon(
      std::string nome, 
      std::string tipo_ataque, 
      double forca_ataque
    );
    virtual ~Pokemon() {}
    
    void falar_nome();
    virtual void falar_tipo_ataque();
    void imprimir_status();
    void imprimir_informacoes();
    std::string pegar_nome();

    void atacar(Pokemon* outro_pokemon);
    void receber_dano(double valor_dano);
    void set_dano(double dano);
    
    virtual double calcular_dano() = 0;
};

#endif