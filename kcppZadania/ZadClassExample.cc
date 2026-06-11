#include <iostream>
#include <string>

class Samochod {
private:
    std::string marka;
    int rok;
    float pojemnosc;
    
public:
    // Konstruktor
    Samochod() {
        marka = "Nieznana";
        rok = 2000;
        pojemnosc = 1.6;
    }
    
    // Settery
    void ustawMarke(std::string m) { marka = m; }
    void ustawRok(int r) { rok = r; }
    void ustawPojemnosc(float p) { pojemnosc = p; }
    
    // Gettery
    std::string podajMarke() { return marka; }
    int podajRok() { return rok; }
    float podajPojemnosc() { return pojemnosc; }
    
    void wyswietlInfo() {
        std::cout << "Samochod: " << marka << ", " << rok 
                  << ", " << pojemnosc << "L" << std::endl;
    }
};

int main() {
    Samochod mojAuto;
    mojAuto.ustawMarke("Toyota");
    mojAuto.ustawRok(2020);
    mojAuto.ustawPojemnosc(2.0);
    mojAuto.wyswietlInfo();
    
    return 0;
}