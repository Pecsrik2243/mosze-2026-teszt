#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: NELEMENTS nem definiálva - a konstans N_ELEMENTS (kis n helyett)
    int *b = new int[NELEMENTS];
    // HIBA: hiányzik a pontosvessző a cout utáni lezáráshoz
    std::cout << '1-100 ertekek duplazasa'
    // HIBA: üres a for ciklus feltétele - az i nem nő
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    // HIBA: az üres for feltételben az i nem nő, így végtelen ciklus vagy egyáltalán nem fut
    for (int i = 0; i; i++)
    {
        // HIBA: hiányzik a pontosvessző és nincs b[i] kiírása
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // HIBA: az atlag nem inicializálva (hibás érték lesz)
    int atlag;
    // HIBA: vesszőt használtak pontosvessző helyett az i++ előtt, és az i < N_ELEMENTS után
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // HIBA: hiányzik a pontosvessző az += után
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
