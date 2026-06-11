#include <iostream>

int main() {
    int liczba;
    int suma = 0;
    int licznik = 0;
    
    std::cout << "Podawaj liczby (0 konczy):" << std::endl;
    
    while(true) {
        std::cin >> liczba;
        if(liczba == 0) break;
        
        if(liczba < 0) {
            std::cout << "Liczba ujemna" << std::endl;
            continue;
        }
        
        suma += liczba;
        licznik++;
    }
    
    std::cout << "Podano " << licznik << " liczb dodatnich" << std::endl;
    std::cout << "Suma: " << suma << std::endl;
    
    return 0;
}