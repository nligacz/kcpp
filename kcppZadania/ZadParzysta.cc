#include <iostream>

// a) Sprawdzanie przez operacje bitowe
bool czyParzystaBitowo(int n) {
    return (n & 1) == 0;
}

// b) Sprawdzanie przez modulo
bool czyParzystaModulo(int n) {
    return n % 2 == 0;
}

bool czyParzystaWarunek(int n) {
    return (n % 2 == 0) ? true : false;
}

int main() {
    int liczba;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    
    std::cout << "Bitowo: " << (czyParzystaBitowo(liczba) ? "parzysta" : "nieparzysta") << std::endl;
    std::cout << "Modulo: " << (czyParzystaModulo(liczba) ? "parzysta" : "nieparzysta") << std::endl;
    std::cout << "Warunek: " << (czyParzystaWarunek(liczba) ? "parzysta" : "nieparzysta") << std::endl;
    
    return 0;
}