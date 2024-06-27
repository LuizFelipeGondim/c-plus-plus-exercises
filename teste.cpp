#include <iostream>

int main() {
    // Alocação dinâmica de um inteiro
    int* ptr = new int;
    
    // Atribui um valor ao inteiro alocado dinamicamente
    *ptr = 10;
    
    // Imprime o valor alocado dinamicamente
    std::cout << "Valor alocado dinamicamente: " << *ptr << std::endl;
    
    // Não há necessidade de deletar a alocação dinâmica aqui
    
    return 0;
}
