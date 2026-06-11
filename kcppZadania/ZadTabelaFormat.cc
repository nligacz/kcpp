#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::cout << "| " << std::setw(14) << std::left << "Nazwa" 
              << "| " << std::setw(6) << std::right << "Cena" 
              << "| " << std::setw(5) << std::right << "Ilosc" << " |" << std::endl;
    std::cout << "|----------------|--------|-------|" << std::endl;
    
    std::cout << "| " << std::setw(14) << std::left << "Chleb" 
              << "| " << std::setw(6) << std::fixed << std::setprecision(2) << 4.99 
              << "| " << std::setw(5) << 5 << " |" << std::endl;
    
    std::cout << "| " << std::setw(14) << std::left << "Mleko" 
              << "| " << std::setw(6) << 3.20 
              << "| " << std::setw(5) << 10 << " |" << std::endl;
    
    std::cout << "| " << std::setw(14) << std::left << "Jajka (10 szt)" 
              << "| " << std::setw(6) << 8.50 
              << "| " << std::setw(5) << 3 << " |" << std::endl;
    
    return 0;
}