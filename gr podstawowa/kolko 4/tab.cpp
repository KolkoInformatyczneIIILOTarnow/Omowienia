#include <iostream>
using namespace std;

const int MAX_SIZE = 1000005;

int array[MAX_SIZE];

/**
 * Funkcja read_array wczytuje kolejne liczby 
 * ciagu podanego na wejsciu do tablicy o nazwie
 * array a nastepnie zwraca rozmiar podanego ciagu.
 **/
int read_array() {
    int size = 0;
    while (cin >> array[size]) {
        size++;
    }
    return size;
}

/**
 * Funkcja print_reverse_array przyjmuje w argumencie
 * rozmiar ciagu ktory mamy odwrocic znajdujacego
 * sie na kolejnych elementach tablicy array.
 * 
 * Wypisuje elementy ciagu od ostatniego
 * (o indeksie n - 1) az do pierwszego (o indeksie 0).
 **/
void print_reverse_array(int size) {
    for (int i = size - 1; i >= 0; i--) 
        cout << array[i] << " ";
    cout << endl;
}

int main() {
    int size = read_array();   // Wczytanie ciagu i pobranie jego rozmiaru 
    print_reverse_array(size); // Wypisanie odwroconego ciagu
    return 0;
}