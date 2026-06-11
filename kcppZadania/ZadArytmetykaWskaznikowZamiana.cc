#include <iostream>

void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 15, y = 30;
    
    std::cout << "Przed: x=" << x << ", y=" << y << std::endl;
    
    zamien(&x, &y);
    
    std::cout << "Po: x=" << x << ", y=" << y << std::endl;
    
    return 0;
}