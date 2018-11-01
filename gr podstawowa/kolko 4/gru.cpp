#include <iostream>
using namespace std;

const int MAX_N = 1000005;

// Liczba drzew w sadzie. Jest globalna dla wygody,
// poniewaz wczytujemy ja w innej funkcji niz jest
// ona faktycznie wykorzystywana.
//
// Nastepnie deklracja tablicy w ktorej bedziemy
// przechowywac rodzaje drzew.
int n;
int trees[MAX_N];

/**
 * Funkcja read() wczytuje do globalnej zmiennej
 * o nazwie n liczbe oznaczajaca liczbe drzew w sadzie.
 * Nastepnie do tablicy trees wczytuje kolejne
 * rodzaje drzew w sadzie.
 **/ 
void read() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> trees[i];
}

/**
 * Funkcja solve zwraca odleglosc, o ktora jestesmy pytani w zadaniu.
 * Tworzy 4 zmienne:
 *      1) indeks pierwszej jabloni
 *      2) indeks ostatniej jabloni
 *      3) indeks pierwszej gruszy
 *      4) indeks ostatniej gruszy
 * W petli aktualizuje wartosci tych zmiennych, tak aby
 * po wyjsciu ich wartosci zgadzaly sie z powyzszym opisem.
 **/
int solve() {
    // poczatkowa wartosc jest rowna -1 dla oznaczenia
    // czy spotkalismy juz dany typ drzewa w sadzie.
    int first_g = -1, first_j = -1;
    // brak wartosci poczatkowej, bo przy kazdym wystapieniu 
    // odpowiedniego rodzaju drzewa aktualizujemy odpowiednia zmienna.
    int last_g, last_j;

    for (int i = 0; i < n; i++) {
        if (trees[i] == 0) { // jesli i-te drzewo jest grusza
            if (first_g == -1) // jesli grusza jeszcze nie wystpaila w ciagu
                first_g = i;
            last_g = i;        // napotkana grusza jest jednoczesnie ostatnia dotad napotkana
        }
        else {              // jesli i-te drzewo jest jablonia
            if (first_j == -1)
                first_j = i;
            last_j = i;
        }
    }

    return max(last_g - first_j, last_j - first_g);
}

int main() {
    ios_base::sync_with_stdio(false);
    read();     // wczytanie danych
    cout << solve() << endl; // wypisanie wyniku
    return 0;
}