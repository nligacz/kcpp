#include <iostream>
#include <cmath>

// Potega dla liczb calkowitych
int potega(int podstawa, int wykladnik) {
    int wynik = 1;
    for(int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

// Potega dla liczb zmiennoprzecinkowych
double potega(double podstawa, double wykladnik) {
    return pow(podstawa, wykladnik);
}

int main() {
    std::cout << "2^3 = " << potega(2, 3) << std::endl;
    std::cout << "2.5^2 = " << potega(2.5, 2.0) << std::endl;
    
    return 0;
}