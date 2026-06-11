#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x = 123.456789;
    double y = 7.5;
    double srednia = (x + y) / 2;
    
    
    // Ustawienia formatowania
    std::cout << "Wynik  : " << std::fixed << std::setprecision(5) 
              << x << " jest niepoprawny ale:" << std::endl;
    
    std::cout << "   output:   " << std::setw(8) << std::setfill(' ') 
              << std::fixed << std::setprecision(3) << x 
              << "    T: " << std::setw(6) << std::setprecision(3) << y << std::endl;
    
    std::cout << "   output1:  " << std::setw(8) << std::setprecision(4) << x 
              << "   T: " << std::setw(8) << std::setprecision(5) << y << std::endl;
    
    std::cout << "   output2:  " << std::setw(8) << std::setprecision(4) << x 
              << "   T: " << std::setw(9) << std::setprecision(6) << y << std::endl;
    
    std::cout << "   ---------------------------------" << std::endl;
    std::cout << "   average:  " << std::setw(8) << std::setprecision(4) << srednia 
              << "   T: " << std::setw(9) << std::setprecision(6) << srednia << std::endl;
    
    
    return 0;
}