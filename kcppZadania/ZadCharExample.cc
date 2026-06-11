#include <iostream>
#include <cstring>

int main() {
    char tekst1[50] = "kotki ";
    char tekst2[] = "biale";
    char tekst3[50];
        
    // strlen  
    std::cout << "Dlugosc tekst1: " << strlen(tekst1) << std::endl;
    
    // strcpy 
    strcpy(tekst3, tekst1);
    std::cout << "Po strcpy tekst3: " << tekst3 << std::endl;
    
    // strcat 
    strcat(tekst1, tekst2);
    std::cout << "Po strcat: " << tekst1 << std::endl;
    
    // strcmp 
    if(strcmp(tekst2, "biale") == 0) {
        std::cout << "Teksty sa identyczne" << std::endl;
    }
    
    return 0;
}