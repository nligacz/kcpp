#include <iostream>

// Zwykle funkcje
void funkcja1() { std::cout << "Wykonano funkcje 1" << std::endl; }
void funkcja2() { std::cout << "Wykonano funkcje 2" << std::endl; }
void funkcja3() { std::cout << "Wykonano funkcje 3" << std::endl; }

// Funkcje extern "C"
extern "C" void funkcjaExtern1() { 
    std::cout << "Wykonano funkcje extern 'C' 1" << std::endl; 
}

extern "C" void funkcjaExtern2() { 
    std::cout << "Wykonano funkcje extern 'C' 2" << std::endl; 
}

int main(int argc, char* argv[]) {
    std::cout << "Program" << std::endl;
    
    if(argc < 2) {
        std::cout << "Uzycie: " << argv[0] << " [numer_funkcji]" << std::endl;
        std::cout << "Dostepne: 1,2,3,4(extern1),5(extern2)" << std::endl;
        return 1;
    }
    
    int wybor = std::stoi(argv[1]);
    
    switch(wybor) {
        case 1: funkcja1(); break;
        case 2: funkcja2(); break;
        case 3: funkcja3(); break;
        case 4: funkcjaExtern1(); break;
        case 5: funkcjaExtern2(); break;
        default: std::cout << "Nieprawidlowy numer" << std::endl;
    }
    
    return 0;
}