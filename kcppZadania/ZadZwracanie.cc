#include <iostream>

int wartoscGlobal = 100;
int tablicaGlobal[] = {5, 10, 15, 20};

// 1. Zwracanie przez wartosc
int zwrocWartosc() {
    int x = 50;
    return x;
}

// 2. Zwracanie przez referencje
int& zwrocReferencje() {
    return wartoscGlobal;
}

// 3. Zwracanie przez wskaznik
int* zwrocWskaznik() {
    return &wartoscGlobal;
}

// 4. Zwracanie "tablicy" - tak naprawde wskaznika
int* zwrocTablice() {
    return tablicaGlobal;
}

int main() {
    
    // Wartosc
    int v = zwrocWartosc();
    std::cout << "1. Przez wartosc: " << v << std::endl;
    
    // Referencja
    zwrocReferencje() = 200;
    std::cout << "2. Przez referencje: " << wartoscGlobal << std::endl;
    
    // Wskaznik
    int* p = zwrocWskaznik();
    std::cout << "3. Przez wskaznik: " << *p << std::endl;
    
    // Tablica
    int* tab = zwrocTablice();
    std::cout << "4. Tablica[2]: " << tab[2] << std::endl;
    
    return 0;
}