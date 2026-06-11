#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    const double PI = 3.14159265359;
    const double E = 2.71828182846;
    const double ZLOTY = 1.61803398875;
    
    std::cout << std::setw(15) << std::left << "Stala" 
              << std::setw(20) << "Wartosc (domyslnie)"
              << std::setw(20) << "Notacja stala"
              << std::setw(20) << "Notacja naukowa" << std::endl;
    std::cout << "---------------    --------------------    --------------------    --------------------" << std::endl;
    
    std::cout << std::setw(15) << std::left << "Pi"
              << std::setw(20) << std::fixed << std::setprecision(5) << PI
              << std::setw(20) << std::fixed << std::setprecision(6) << PI
              << std::setw(20) << std::scientific << std::setprecision(6) << PI << std::endl;
    
    std::cout << std::setw(15) << std::left << "e"
              << std::setw(20) << std::fixed << std::setprecision(5) << E
              << std::setw(20) << std::fixed << std::setprecision(6) << E
              << std::setw(20) << std::scientific << std::setprecision(6) << E << std::endl;
    
    std::cout << std::setw(15) << std::left << "Zloty podzial"
              << std::setw(20) << std::fixed << std::setprecision(5) << ZLOTY
              << std::setw(20) << std::fixed << std::setprecision(6) << ZLOTY
              << std::setw(20) << std::scientific << std::setprecision(6) << ZLOTY << std::endl;
    
    return 0;
}