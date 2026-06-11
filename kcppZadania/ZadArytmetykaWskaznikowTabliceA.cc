#include <iostream>

int main() {
    int tab[10];
    int* ptr = tab;
    
    // Wypelnienie
    for(int i = 0; i < 10; i++) {
        *(ptr + i) = i + 1;
    }
    
    // Suma
    int suma = 0;
    for(int i = 0; i < 10; i++) {
        suma += *(ptr + i);
    }
    
    // Maksimum
    int max = *ptr;
    for(int i = 1; i < 10; i++) {
        if(*(ptr + i) > max) max = *(ptr + i);
    }
    
    // Odwrocenie
    int* lewy = ptr;
    int* prawy = ptr + 9;
    while(lewy < prawy) {
        int temp = *lewy;
        *lewy = *prawy;
        *prawy = temp;
        lewy++;
        prawy--;
    }
    
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Maksimum: " << max << std::endl;
    std::cout << "Po odwroceniu: ";
    for(int i = 0; i < 10; i++) std::cout << tab[i] << " ";
    std::cout << std::endl;
    
    return 0;
}