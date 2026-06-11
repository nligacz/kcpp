#include <iostream>
#include <string>

enum DniTygodnia {
    Poniedzialek = 1,
    Wtorek,
    Sroda,
    Czwartek,
    Piatek,
    Sobota,
    Niedziela
};

std::string nazwaDnia(DniTygodnia d) {
    switch(d) {
        case Poniedzialek: return "Poniedzialek";
        case Wtorek: return "Wtorek";
        case Sroda: return "Sroda";
        case Czwartek: return "Czwartek";
        case Piatek: return "Piatek";
        case Sobota: return "Sobota";
        case Niedziela: return "Niedziela";
        default: return "Nieznany";
    }
}

int main() {
    DniTygodnia dzis = Sroda;
    
    std::cout << "Dzisiaj jest: " << nazwaDnia(dzis) << std::endl;
    std::cout << "Numer dnia: " << dzis << std::endl;
    
    if(dzis == Sroda) {
        std::cout << "To sroda" << std::endl;
    }
    
    return 0;
}