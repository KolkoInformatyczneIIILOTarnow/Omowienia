#include <iostream>
using namespace std;

const int MAX_N = 205;

int array[MAX_N];

/**
 * Funkcja ktora wczytuje n liczb do array[0 : n-1]
 **/ 
void read(int n) {
    for (int i = 0; i < n; i++) 
        cin >> array[i];
}

/**
 * Funkcja zwraca maksymalna wartosc z tablicy array[0 : n-1]
 * Jesl najwieksza wartosc jest mniejsza od 0, zwraca 0.
 **/ 
int get_max(int n) {
    int current_max = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > current_max)
            current_max = array[i];
    }
    return current_max;
}

/**
 * Idea rozwiazania wyglada nastepujaco:
 * Dla kazdego wiersza szukamy maksymalnej wartosci w nim wystepujacej.
 * Jesli jest dodatnia to dodajemy ja do wyniku.
 **/ 
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int result = 0;
    for (int i = 0; i < n; i++) {
        read(n);
        result += get_max(n);
    }

    cout << result << endl;
}