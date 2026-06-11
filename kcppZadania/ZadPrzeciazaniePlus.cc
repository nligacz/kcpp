#include <iostream>

class Punkt {
public:
    int x, y;
    
    Punkt(int a = 0, int b = 0) : x(a), y(b) {}
    
    Punkt operator+(const Punkt& inny) {
        return Punkt(x + inny.x, y + inny.y);
    }
};

int main() {
    Punkt p1(3, 4);
    Punkt p2(1, 2);
    Punkt p3 = p1 + p2;
    
    std::cout << "P1: (" << p1.x << "," << p1.y << ")" << std::endl;
    std::cout << "P2: (" << p2.x << "," << p2.y << ")" << std::endl;
    std::cout << "Suma: (" << p3.x << "," << p3.y << ")" << std::endl;
    
    return 0;
}