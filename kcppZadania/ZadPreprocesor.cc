#include <iostream>

#define KWADRAT(x) ((x)*(x))
#define LACZ(a,b) a##b
#define WYPISZ(x) std::cout << #x << " = " << x << std::endl

int main() {
    int liczba = 5;
    
    std::cout << "Kwadrat(5) = " << KWADRAT(5) << std::endl;
    
    std::cout << "\n Lacz (##)" << std::endl;
    int zmienna1 = 100;
    std::cout << LACZ(zmienna,1) << std::endl;
    
    std::cout << "\n Wypisz (#) " << std::endl;
    WYPISZ(liczba);
    
    #ifdef __cplusplus
    std::cout << "\n Kompilator C++" << std::endl;
    #endif
    
    #ifndef TEST
    std::cout << "Niezdefiniowane" << std::endl;
    #endif
    
    return 0;
}