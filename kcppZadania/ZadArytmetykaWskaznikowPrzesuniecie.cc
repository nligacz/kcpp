#include <iostream>

void przesunWPrawo(int* tab, int rozmiar) {
    if(rozmiar <= 1) return;
    
    int ostatni = *(tab + rozmiar - 1);
    
    for(int i = rozmiar - 1; i > 0; i--) {
        *(tab + i) = *(tab + i - 1);
    }
    *tab = ostatni;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = 5;
    
    std::cout << "Przed: ";
    for(int i = 0; i < rozmiar; i++) std::cout << tablica[i] << " ";
    
    przesunWPrawo(tablica, rozmiar);
    
    std::cout << "\nPo: ";
    for(int i = 0; i < rozmiar; i++) std::cout << tablica[i] << " ";
    std::cout << std::endl;
    
    return 0;
}