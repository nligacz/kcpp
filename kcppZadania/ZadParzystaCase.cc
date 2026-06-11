#include <iostream>

bool czyParzystaBitowo(int n) {
    return (n & 1) == 0;
}

bool czyParzystaModulo(int n) {
    return n % 2 == 0;
}

bool czyParzystaWarunek(int n) {
    return (n % 2 == 0) ? true : false;
}

int main() {
    int liczba, wybor;
    
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    
    std::cout << "Wybierz metode (1-3):" << std::endl;
    std::cout << "1. Operacje bitowe" << std::endl;
    std::cout << "2. Modulo" << std::endl;
    std::cout << "3. Operator warunkowy" << std::endl;
    std::cin >> wybor;
    
    switch(wybor) {
        case 1:
            std::cout << "Wynik: " << (czyParzystaBitowo(liczba) ? "parzysta" : "nieparzysta") << std::endl;
            break;
        case 2:
            std::cout << "Wynik: " << (czyParzystaModulo(liczba) ? "parzysta" : "nieparzysta") << std::endl;
            break;
        case 3:
            std::cout << "Wynik: " << (czyParzystaWarunek(liczba) ? "parzysta" : "nieparzysta") << std::endl;
            break;
        default:
            std::cout << "Nieprawidlowy wybor" << std::endl;
    }
    
    return 0;
}