#include <iostream>
using namespace std;
const int MAX_SIZE = 1000005;

int array[MAX_SIZE];

/**
 * Funkcja read_array zapisuje do globalnej tablicy
 * o nazwie array kolejne n elementow podanych na
 * standardowe wejscie (za pomoca instrukcji cin >>) 
 **/ 
void read_array(int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
}

/**
 * Funkcja print_shifted_array wypisuje ciag zapisany w tablicy array
 * o dlugosci n cyklicznie przesuniety w lewo o k pozycji.
 * np.:
 *      w cyklicznym przesunieciu w lewo o 2 pozycje: 
 *      1 2 3 4 5 6  ->  3 4 5 6 1 2 3
 * 
 * Spojrzmy na tabelke pokazujaca: elemnty z jakich
 * indeksow zastapia kolejne miejsca w tablicy
 *  
 * | pozycja |  indeks elementu ktory    |
 * |         |  pojawi sie na tej pozycji|
 * ______________________________________                       
 * |   0     |        k                  |
 * |   1     |        k + 1              |
 * |   2     |        k + 2              |
 * |   .     |        .                  |
 * |   .     |        .                  |
 * |n - k - 1|        n - 1              |
 * |n - k    |        0                  |
 * |n - k + 1|        1                  |
 * |n - k + 2|        2                  |
 * |   .     |        .                  |
 * |   .     |        .                  |
 * | n - 1   |        k                  |
 * 
 * Latwo zauwazyc ze na kazdym i-tym indeksie pojawi sie element z indeksu (i + k) % n -tej pozycji.
 **/ 
void print_shifted_array(int n, int k) {
    for (int i = 0; i < n; i++) 
        cout << array[(i + k) % n] << " ";
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    read_array(n);
    print_shifted_array(n, k);
    return 0;
}