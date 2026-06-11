#include <iostream>
#include <string>

int main() {
    std::string komenda;
    
    std::cout << " komendy: start, stop, help, exit" << std::endl;
    std::cout << "Podaj komende: ";
    std::cin >> komenda;
    
    // Switch nie dziala bezposrednio na stringach
  
    if(komenda == "start") {
        std::cout << "Uruchamianie" << std::endl;
    } else if(komenda == "stop") {
        std::cout << "Zatrzymywanie" << std::endl;
    } else if(komenda == "help") {
        std::cout << "Komendy: start, stop, help, exit" << std::endl;
    } else if(komenda == "exit") {
        std::cout << "Wyjscie" << std::endl;
    } else {
        std::cout << "Nieznana komenda" << std::endl;
    }
    
    return 0;
}