#include <iostream>
using namespace std;

// Klasa reprezentująca książkę w bibliotece
class Ksiazka {
public:
    string tytul;        // Tytuł książki
    string autor;        // Autor książki
    int rokWydania;      // Rok wydania
    int liczbaStron;     // Liczba stron

    // Konstruktor z parametrami - służy do inicjalizacji obiektu
    Ksiazka(string t, string a, int rok, int strony) {
        tytul = t;
        autor = a;
        rokWydania = rok;
        liczbaStron = strony;
    }

    // Metoda wyświetlająca informacje o książce
    void wyswietlInformacje() {
        cout << "Tytul: " << tytul << '\n';
        cout << "Autor: " << autor << '\n';
        cout << "Rok wydania: " << rokWydania << '\n';
        cout << "Liczba stron: " << liczbaStron << "\n\n";
    }
};

int main() {
    // Utworzenie kilku obiektów klasy Ksiazka
    Ksiazka ksiazka1("Behawiorysta", "Remigiusz Mroz", 2019, 496);
    Ksiazka ksiazka2("Lalka", "Boleslaw Prus", 1890, 688);
    Ksiazka ksiazka3("Harry Potter i Kamien Filozoficzny", "J.K. Rowling", 1997, 320);

    // Wyświetlenie informacji o każdej książce
    cout << "Informacje o ksiazkach:\n\n";
    ksiazka1.wyswietlInformacje();
    ksiazka2.wyswietlInformacje();
    ksiazka3.wyswietlInformacje();

    return 0;
}