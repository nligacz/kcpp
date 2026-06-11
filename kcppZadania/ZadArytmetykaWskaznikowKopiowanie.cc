#include <iostream>

void kopiujTab(int* zrodlo, int* cel, int rozmiar) {
    for(int i = 0; i < rozmiar; i++) {
        *cel = *zrodlo;
        zrodlo++;
        cel++;
    }
}

int main() {
    int tabA[] = {10, 20, 30, 40, 50};
    int tabB[5];
    int rozmiar = 5;
    
    kopiujTab(tabA, tabB, rozmiar);
    
    std::cout << "TabA: ";
    for(int i = 0; i < rozmiar; i++) std::cout << tabA[i] << " ";
    
    std::cout << "\nTabB: ";
    for(int i = 0; i < rozmiar; i++) std::cout << tabB[i] << " ";
    std::cout << std::endl;
    
    return 0;
}