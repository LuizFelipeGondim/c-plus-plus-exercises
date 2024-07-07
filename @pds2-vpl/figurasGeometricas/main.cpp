#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <memory>

class Ponto {
  private: 
    int p1, p2;

  public:
    Ponto(int p1, int p2) : p1(p1), p2(p2) {}

    int getP1() const { return p1; }
    int getP2() const { return p2; }

};

class FiguraGeometrica {
private:
  Ponto centro;

public:
  static float areaTotal;
  FiguraGeometrica(int c1, int c2) : centro(c1, c2) {}
  virtual ~FiguraGeometrica() = default;

  virtual void Desenha() {
    std::cout << centro.getP1() << " " << centro.getP2() << " "; 
  }

  virtual float CalculaArea() = 0;

};

class Retangulo : public FiguraGeometrica {
  private: 
    int lado1, lado2;

  public: 
    Retangulo(int c1, int c2, int lado1, int lado2) : 
      FiguraGeometrica(c1, c2), lado1(lado1), lado2(lado2) {
        FiguraGeometrica::areaTotal += CalculaArea();
      }

    void Desenha() override {
      FiguraGeometrica::Desenha();
      std::cout << "RETANGULO" << std::endl;
    }

    float CalculaArea() override {
      return lado1*lado2;
    }
};

class Triangulo : public FiguraGeometrica {
  private:
    int base, altura;

  public:
    Triangulo(int c1, int c2, int base, int altura) : 
      FiguraGeometrica(c1, c2), base(base), altura(altura) {
        FiguraGeometrica::areaTotal += CalculaArea();
      }

    void Desenha() override {
      FiguraGeometrica::Desenha();
      std::cout << "TRIANGULO" << std::endl;
    }

    float CalculaArea() override {
      return (base*altura)/2;
    }
};

class Circulo : public FiguraGeometrica {
  private:
    int raio;

  public:
    Circulo(int c1, int c2, int raio) : 
      FiguraGeometrica(c1, c2), raio(raio) {
        FiguraGeometrica::areaTotal += CalculaArea();
      }

    void Desenha() override {
      FiguraGeometrica::Desenha();
      std::cout << "CIRCULO" << std::endl;
    }

    float CalculaArea() override {
      return M_PI*pow(raio, 2);
    }
};

float FiguraGeometrica::areaTotal = 0.0;

int main() {
  std::vector<FiguraGeometrica*> figuras;
  char option;

  while ((std::cin >> option) && option != 'E') {
    if(option == 'R') {
      int c1, c2, lado1, lado2;
      std::cin >> c1 >> c2 >> lado1 >> lado2; 
      figuras.push_back(new Retangulo(c1, c2, lado1, lado2));
      continue;
    }

    if(option == 'C') {
      int c1, c2, raio;
      std::cin >> c1 >> c2 >> raio; 
      figuras.push_back(new Circulo(c1, c2, raio));
      continue;
    }

    if(option == 'T') {
      int c1, c2, base, altura;
      std::cin >> c1 >> c2 >> base >> altura; 
      figuras.push_back(new Triangulo(c1, c2, base, altura));
      continue;
    }

    if(option == 'D'){
      for (auto& figura : figuras)
        figura->Desenha();

      continue;
    }

    if(option == 'A') {
      std::cout << std::fixed;
      std::cout << std::setprecision(2) << FiguraGeometrica::areaTotal << std::endl; 
      continue;
    }
  }

  for(auto& figura : figuras)
    delete figura;

  return 0;
}