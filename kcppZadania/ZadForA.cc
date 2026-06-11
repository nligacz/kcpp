#include <iostream>

int main() {
    std::cout << " nieparzyste od 1 do 20" << std::endl;
    for(int i = 1; i <= 20; i++) {
        if(i % 2 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    
    std::cout << " podzielne przez 7 od 1 do 100" << std::endl;
    for(int i = 1; i <= 100; i++) {
        if(i % 7 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    
    return 0;
}