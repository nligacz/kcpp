#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::stringstream ss;
    
    // Zapisywanie do stringstream
    ss << "Liczba: " << 42 << " Tekst: " << "Hello";
    
    // Odczyt ze stringstream
    std::string tekst;
    int liczba;
    
    ss >> tekst >> liczba;
    
    std::cout << "Odczytano: " << tekst << " " << liczba << std::endl;
    
    std::stringstream konwerter("123");
    int wartosc;
    konwerter >> wartosc;
    std::cout << "string->int: " << wartosc << std::endl;
    
    return 0;
}