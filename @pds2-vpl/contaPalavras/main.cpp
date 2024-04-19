#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

struct Palavras {
  std::string palavra;
  int repeticoes;
};

void substituirAlfaNumericosPorEspaco(std::string& texto) {
  for (char& c : texto) {
    if (!isalnum(c)) {
      c = ' ';
    }
  }
}

bool procurarPalavra(const Palavras& p, const std::string& palavra) {
    return p.palavra == palavra;
}

bool ordenarPalavras(const Palavras& a, const Palavras& b) {
    return a.palavra < b.palavra;
}

int main() {

  std::string nomeArquivo;
  std::cin >> nomeArquivo;

  std::ifstream arquivo(nomeArquivo); 
  
  std::vector<Palavras> palavras; 

  std::string linha;
  std::string texto;
  
  while (std::getline(arquivo, linha)) {
    texto += linha + "\n";
  }

  substituirAlfaNumericosPorEspaco(texto);
  
  std::string palavra;
  std::istringstream textoTratado(texto);
  
  while (textoTratado >> palavra) { 

    //palavra.erase(std::remove_if(palavra.begin(), palavra.end(), ::isspace), palavra.end());
    palavra.erase(std::remove_if(palavra.begin(), palavra.end(), [](char c) { return !std::isalnum(c); }), palavra.end());
    std::transform(palavra.begin(), palavra.end(), palavra.begin(), ::tolower);
    
    auto naoExiste = std::find_if(palavras.begin(), palavras.end(), [&](const Palavras& p) {
        return procurarPalavra(p, palavra);
    });

    if (naoExiste == palavras.end()) {
      palavras.push_back({palavra, 1});
    } else {
      int index = std::distance(palavras.begin(), naoExiste);
      palavras[index].repeticoes++;
    }

  }

  arquivo.close();

  std::sort(palavras.begin(), palavras.end(), ordenarPalavras);

  for (size_t i = 0; i < palavras.size(); i++) {
    std::cout << palavras[i].palavra << " " << palavras[i].repeticoes << std::endl;
  }

  return 0;
}