#include <iostream>

int main() {
    int wysokosc = 5;
    
    std::cout << "Trojkat rownoramienny" << std::endl;
    for(int i = 1; i <= wysokosc; i++) {
        for(int j = 1; j <= wysokosc - i; j++) {
            std::cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    std::cout << "\nPiramida z liczb" << std::endl;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}