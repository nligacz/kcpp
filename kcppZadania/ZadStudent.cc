#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Student {
    std::string imie;
    std::string nazwisko;
    int indeks;
};

std::vector<Student> baza;

void dodajStudenta() {
    Student s;
    std::cout << "Imie: ";
    std::cin >> s.imie;
    std::cout << "Nazwisko: ";
    std::cin >> s.nazwisko;
    std::cout << "Numer indeksu: ";
    std::cin >> s.indeks;
    
    // Sprawdzanie unikalnosci indeksu
    for(const auto& st : baza) {
        if(st.indeks == s.indeks) {
            std::cout << "Indeks musi byc unikalny" << std::endl;
            return;
        }
    }
    
    if(s.imie.empty()) {
        std::cout << "Imie nie moze byc puste" << std::endl;
        return;
    }
    
    baza.push_back(s);
    std::cout << "Dodano studenta" << std::endl;
}

void usunStudenta() {
    int indeks;
    std::cout << "Podaj numer indeksu do usuniecia: ";
    std::cin >> indeks;
    
    for(auto it = baza.begin(); it != baza.end(); ++it) {
        if(it->indeks == indeks) {
            baza.erase(it);
            std::cout << "Usunieto studenta" << std::endl;
            return;
        }
    }
    std::cout << "Nie znaleziono studenta" << std::endl;
}

void wyswietlListe() {
    std::cout << "\n Lista studentow" << std::endl;
    for(const auto& s : baza) {
        std::cout << s.indeks << " | " << s.nazwisko << " " << s.imie << std::endl;
    }
}

void sortujListe() {
    std::sort(baza.begin(), baza.end(), [](const Student& a, const Student& b) {
        return a.nazwisko < b.nazwisko;
    });
    std::cout << "Posortowano alfabetycznie" << std::endl;
}

void sprawdzStudenta() {
    int indeks;
    std::cout << "Podaj numer indeksu: ";
    std::cin >> indeks;
    
    for(const auto& s : baza) {
        if(s.indeks == indeks) {
            std::cout << "Znaleziono: " << s.nazwisko << " " << s.imie << std::endl;
            return;
        }
    }
    std::cout << "Nie znaleziono" << std::endl;
}

int main() {
    int wybor;
    
    do {
        std::cout << "\n MENU " << std::endl;
        std::cout << "1. Dodaj studenta" << std::endl;
        std::cout << "2. Usun studenta" << std::endl;
        std::cout << "3. Wyswietl liste" << std::endl;
        std::cout << "4. Sortuj liste" << std::endl;
        std::cout << "5. Sprawdz studenta" << std::endl;
        std::cout << "0. Wyjscie" << std::endl;
        std::cout << "Wybor: ";
        std::cin >> wybor;
        
        switch(wybor) {
            case 1: dodajStudenta(); break;
            case 2: usunStudenta(); break;
            case 3: wyswietlListe(); break;
            case 4: sortujListe(); break;
            case 5: sprawdzStudenta(); break;
        }
    } while(wybor != 0);
    
    return 0;
}