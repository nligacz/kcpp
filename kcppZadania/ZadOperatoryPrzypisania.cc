#include <iostream>

void operatoryArytmetyczne() {
    int x = 12, y = 5;
    
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "x + y = " << (x + y) << std::endl;
    std::cout << "x - y = " << (x - y) << std::endl;
    std::cout << "x * y = " << (x * y) << std::endl;
    std::cout << "x / y = " << (x / y) << std::endl;
    std::cout << "x % y = " << (x % y) << std::endl;
}

void operatoryPrzypisania() {
    int z = 10;
    
    std::cout << "Start: z = " << z << std::endl;
    
    z += 5;
    std::cout << "z += 5: " << z << std::endl;
    
    z -= 3;
    std::cout << "z -= 3: " << z << std::endl;
    
    z *= 2;
    std::cout << "z *= 2: " << z << std::endl;
    
    z /= 4;
    std::cout << "z /= 4: " << z << std::endl;
    
    z %= 3;
    std::cout << "z %= 3: " << z << std::endl;
}

int main() {
    operatoryArytmetyczne();
    operatoryPrzypisania();
    return 0;
}