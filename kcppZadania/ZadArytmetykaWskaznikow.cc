#include <iostream>

void funkcja1() {
    int tab[] = {10, 20, 30, 40, 50};
    int* p = tab;
    
    std::cout << "*p = " << *p << std::endl;
    
    p++;
    std::cout << "Po p++: *p = " << *p << std::endl;
    
    ++p;
    std::cout << "Po ++p: *p = " << *p << std::endl;
    
    ++*p;
    std::cout << "Po ++*p: *p = " << *p << std::endl;
    
    (*p)++;
    std::cout << "Po (*p)++: *p = " << *p << std::endl;
}

void funkcja2() {
    int A = 0, B = 0, C = 0;
    int* pA = &A, *pB = &B, *pC = &C;
    
    std::cout << "1. A,B,C: " << A << " " << B << " " << C << std::endl;
    
    *pB = 10;
    std::cout << "2. A,B,C: " << A << " " << B << " " << C << std::endl;
    
    *pC = 20;
    std::cout << "3. A,B,C: " << A << " " << B << " " << C << std::endl;
    
    *pB = 30;
    std::cout << "4. A,B,C: " << A << " " << B << " " << C << std::endl;
    
    *pA = 40;
    std::cout << "5. A,B,C: " << A << " " << B << " " << C << std::endl;
    
    *pB = 50;
    std::cout << "6. A,B,C: " << A << " " << B << " " << C << std::endl;
    
    *pC = 60;
    std::cout << "7. A,B,C: " << A << " " << B << " " << C << std::endl;
    
    *pB = 70;
    std::cout << "8. A,B,C: " << A << " " << B << " " << C << std::endl;
    
    *pA = 80;
    std::cout << "9. A,B,C: " << A << " " << B << " " << C << std::endl;
    
    *pB = 90;
    std::cout << "10. A,B,C: " << A << " " << B << " " << C << std::endl;
}

int main() {
    funkcja1();
    funkcja2();
    return 0;
}