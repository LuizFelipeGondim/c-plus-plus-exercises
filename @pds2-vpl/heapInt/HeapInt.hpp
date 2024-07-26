// HeapInt.hpp
#ifndef HEAPINT_H
#define HEAPINT_H

#include <iostream>

class HeapInt {
private:
    int* ponteiro;

public:
    HeapInt();
    HeapInt(int valor);
    HeapInt(const HeapInt& elementoParaCopia);

    ~HeapInt();

    HeapInt& operator=(int valor);
    HeapInt& operator=(const HeapInt& elementoParaCopia);

    HeapInt operator+(const HeapInt& elementoParaCopia) const;
    HeapInt operator-(const HeapInt& elementoParaCopia) const;

    bool operator==(const HeapInt& elementoParaCopia) const;

    friend std::ostream& operator<<(std::ostream& out, const HeapInt& h);
    friend std::istream& operator>>(std::istream& in, HeapInt& h);
};

#endif