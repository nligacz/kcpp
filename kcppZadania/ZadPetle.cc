#include <iostream>

void petlaWhile() {
    std::cout << "while (i++)" << std::endl;
    int i = 0;
    while(i < 5) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;
    
    std::cout << "while (++i)" << std::endl;
    int j = 0;
    while(j < 5) {
        std::cout << j << " ";
        ++j;
    }
    std::cout << std::endl;
}

void petlaDoWhile() {
    std::cout << "do-while" << std::endl;
    int i = 0;
    do {
        if(i == 3) {
            i++;
            continue;
        }
        if(i == 5) break;
        std::cout << i << " ";
        i++;
    } while(i < 10);
    std::cout << std::endl;
}

void petlaFor() {
    std::cout << "for" << std::endl;
    for(int i = 0; i < 10; i++) {
        if(i == 4) continue;
        if(i == 8) break;
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    petlaWhile();
    petlaDoWhile();
    petlaFor();
    return 0;
}