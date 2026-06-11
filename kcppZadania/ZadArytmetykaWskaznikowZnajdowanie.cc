#include <iostream>

int* maxElement(int* tab, int rozmiar) {
    int* max = tab;
    for(int i = 1; i < rozmiar; i++) {
        if(*(tab + i) > *max) {
            max = tab + i;
        }
    }
    return max;
}

int main() {
    int dane[] = {34, 12, 56, 78, 23, 89, 5};
    int rozmiar = sizeof(dane) / sizeof(dane[0]);
    
    int* maks = maxElement(dane, rozmiar);
    
    std::cout << "Wartosc: " << *maks << std::endl;
    std::cout << "Adres: " << maks << std::endl;
    
    return 0;
}