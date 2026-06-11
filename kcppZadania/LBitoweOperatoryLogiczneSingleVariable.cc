#include <iostream>

unsigned char tablicaNaLiczbe(int tab[8]) {
    unsigned char wynik = 0;
    
    for(int i = 0; i < 8; i++) {
        if(tab[i] == 1) {
            wynik = wynik | (1 << i);
        }
    }
    return wynik;
}

int main() {
    int bity[8];
    
    std::cout << "Podaj 8 bitow (0 lub 1):" << std::endl;
    
    for(int i = 0; i < 8; i++) {
        std::cout << "Bit " << i << ": ";
        std::cin >> bity[i];
    }
    
    unsigned char liczba = tablicaNaLiczbe(bity);
    
    std::cout << "Liczba (dziesietnie): " << (int)liczba << std::endl;
    std::cout << "Liczba (binarnie): ";
    for(int i = 7; i >= 0; i--) {
        std::cout << ((liczba >> i) & 1);
    }
    std::cout << std::endl;
    
    return 0;
}