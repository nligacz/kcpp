#include <iostream>

int main() {
    const int ROZ = 5;
    float tab1[ROZ], tab2[ROZ], tab3[ROZ];
    
    std::cout << "Podaj " << ROZ << " liczb:" << std::endl;
    
    for(int i = 0; i < ROZ; i++) {
        std::cin >> *(tab1 + i);
        *(tab2 + i) = *(tab1 + i) * 2;
        *(tab3 + i) = *(tab1 + i) + *(tab2 + i);
    }
    
    std::cout << "\nTab1\tTab2\tTab3" << std::endl;
    for(int i = 0; i < ROZ; i++) {
        std::cout << *(tab1 + i) << "\t" 
                  << *(tab2 + i) << "\t" 
                  << *(tab3 + i) << std::endl;
    }
    
    return 0;
}