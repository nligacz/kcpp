#include <iostream>
#include <string>

int dodaj(int a, int b) {
    return a + b;
}

double dodaj(double a, double b) {
    return a + b;
}

std::string dodaj(std::string a, std::string b) {
    return a + b;
}

int main() {
    std::cout << "int: " << dodaj(10, 20) << std::endl;
    std::cout << "double: " << dodaj(3.5, 2.7) << std::endl;
    std::cout << "string: " << dodaj(std::string("Hello "), std::string("World")) << std::endl;
    
    return 0;
}