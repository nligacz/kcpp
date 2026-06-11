#include <iostream>
#include <string>

int main() {
    std::string napis = "kotki sa super";
    
    std::cout << "Tekst: " << napis << std::endl;
    
    // Dodawanie tekstu
    napis.append(" do przytulania");
    std::cout << "Po append: " << napis << std::endl;
    
    // Wyszukiwanie
    size_t poz = napis.find("super");
    if(poz != std::string::npos) {
        std::cout << "Znaleziono 'super' na pozycji: " << poz << std::endl;
    }
    
    // Wycinanie fragmentu
    std::string fragment = napis.substr(0, 5);
    std::cout << "Fragment: " << fragment << std::endl;
    
    // Zastępowanie
    napis.replace(poz, 5, "fantastyczne");
    std::cout << "Po replace: " << napis << std::endl;
    
    return 0;
}