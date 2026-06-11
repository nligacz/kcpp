#include <iostream>

int sumaElementow(int* tab, int rozmiar) {
    int suma = 0;
    for(int i = 0; i < rozmiar; i++) {
        suma += *(tab + i);
    }
    return suma;
}

int main() {
    int liczby[] = {2, 4, 6, 8, 10};
    int rozmiar = sizeof(liczby) / sizeof(liczby[0]);
    
    int wynik = sumaElementow(liczby, rozmiar);
    
    std::cout << "Suma: " << wynik << std::endl;
    
    return 0;
}