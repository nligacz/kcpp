#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string imie;
    int wiek;
    
    // Wypisywanie na ekran
    std::cout << "Podaj imie: ";
    std::cin >> imie;
    
    std::cout << "Podaj wiek: ";
    std::cin >> wiek;
    
    // Wypisywanie do strumienia bledow
    std::cerr << "komunikat bledu" << std::endl;
    
    // Wyswietlenie wynikow
    std::cout << "Witaj " << imie << ", masz " << wiek << " lat." << std::endl;
    
    return 0;
}