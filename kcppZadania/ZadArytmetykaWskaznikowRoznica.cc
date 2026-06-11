#include <iostream>
#include <cstddef>

int main() {
    int tablica[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* wsk1 = &tablica[2];
    int* wsk2 = &tablica[7];
    
    ptrdiff_t roznica = wsk2 - wsk1;
    
    std::cout << "wsk1 wskazuje na: " << *wsk1 << " (indeks 2)" << std::endl;
    std::cout << "wsk2 wskazuje na: " << *wsk2 << " (indeks 7)" << std::endl;
    std::cout << "Roznica (wsk2 - wsk1): " << roznica << std::endl;
    
    return 0;
}