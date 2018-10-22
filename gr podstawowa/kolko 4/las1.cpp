#include <iostream>
using namespace std;

const int MAX_SIZE = 1000005;

bool array[MAX_SIZE];

/**
 * Funkcja solve przyjmuje jako wartosc parametru liczbe 
 * opisanych w zadaniu drzew w lesie.
 * Dla kazdego drzewa w lesie wczytuje ze standardowego wejscia 
 * (za pomoca instrukcji cin >>) jego opis tj. grubosc i rodzaj.
 * Dla kazdego rodzaju drzewa ktore pojawi sie na wejsciu 
 * po raz pierwszy oznacza ze wystapilo juz w lesie.
 * (tab[i] == true jezeli i-te drzewo wystapilo juz,
 *  w przeciwynym przypadku tab[i] == false)
 * Zlicza w zmiennej result ile roznych rodzajow drzew 
 * wystapilo w lesie i zwraca wartosc tejze zmiennej. 
 **/ 
int solve(int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        int g, r;
        cin >> g >> r;
        if (array[r] == false) {
            result++;
            array[r] = true;
        } 
    }

    return result;
}

int main() {
    int n;
    cin >> n;   // wczytywanie liczby drzew w lesie
    cout << solve(n) << endl; // wypisanie wyniku obliczonego przez funkcje solve
    return 0;
}