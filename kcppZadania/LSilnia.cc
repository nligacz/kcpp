#include <iostream>

long long silnia(int n) {
    if(n < 0) return -1;
    long long wynik = 1;
    for(int i = 1; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}

int main() {
    int n;
    std::cout << "Podaj liczbe: ";
    std::cin >> n;
    
    if(n < 0) {
        std::cout << "blad" << std::endl;
        return 1;
    }
    
    long long suma = 0;
    for(int i = 1; i <= n; i++) {
        suma += silnia(i);
    }
    
    std::cout << "Suma silni od 1 do " << n << " = " << suma << std::endl;
    
    return 0;
}