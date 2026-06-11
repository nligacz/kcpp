#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    
    int poziom, zakres, liczba, proba;
    int proby = 0;
    const int MAX_PROB = 10;
    
    std::cout << "Wybierz poziom 1 - latwy, 2 - trudny): ";
    std::cin >> poziom;
    
    if(poziom == 1) {
        zakres = 50;
    } else {
        zakres = 200;
    }
    
    liczba = rand() % zakres + 1;
    
    std::cout << "Zgadnij liczbe z zakresu 1-" << zakres << std::endl;
    
    do {
        std::cout << "Twoja proba: ";
        std::cin >> proba;
        proby++;
        
        if(proba > liczba) {
            std::cout << "Za duzo" << std::endl;
        } else if(proba < liczba) {
            std::cout << "Za malo" << std::endl;
        } else {
            std::cout << " Zgadles w " << proby << " probach" << std::endl;
            break;
        }
        
        if(proby >= MAX_PROB) {
            std::cout << "Wykorzystales " << MAX_PROB << " prob." << std::endl;
            std::cout << "Prawidlowa liczba to: " << liczba << std::endl;
            break;
        }
        
    } while(proba != liczba);
    
    return 0;
}