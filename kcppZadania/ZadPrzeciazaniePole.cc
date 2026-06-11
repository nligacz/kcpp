#include <iostream>
#include <cmath>

// Pole kwadratu
double pole(double bok) {
    return bok * bok;
}

// Pole prostokata
double pole(double szerokosc, double wysokosc) {
    return szerokosc * wysokosc;
}

// Pole kola
float pole(float promien) {
    return M_PI * promien * promien;
}

int main() {
    std::cout << "Kwadrat (5): " << pole(5.0) << std::endl;
    std::cout << "Prostokat (4,6): " << pole(4.0, 6.0) << std::endl;
    std::cout << "Kolo (3): " << pole(3.0f) << std::endl;
    
    return 0;
}