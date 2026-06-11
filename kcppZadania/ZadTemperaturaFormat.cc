#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Celsjusz   Fahrenheit" << std::endl;
    std::cout << "-------    ---------" << std::endl;
    
    for(int c = -10; c <= 10; c += 5) {
        double f = c * 9.0 / 5.0 + 32.0;
        std::cout << std::setw(5) << c << "     " 
                  << std::setw(8) << std::fixed << std::setprecision(2) << f << std::endl;
    }
    
    return 0;
}