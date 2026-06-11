#include <iostream>
#include <cstdio>

int main() {
    int liczba = 42;
    double pi = 3.14159;
    
    std::cout << "C++" << std::endl;
    std::cout << "Liczba: " << liczba << std::endl;
    std::cout << "PI: " << pi << std::endl;
    
    std::cout << "\nC" << std::endl;
    printf("Liczba: %d\n", liczba);
    printf("PI: %.5f\n", pi);
    
    return 0;
}