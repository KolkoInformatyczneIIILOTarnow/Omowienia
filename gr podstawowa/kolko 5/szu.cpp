#include <iostream>
using namespace std;
const int MAX_N = 1000005;

int array[MAX_N];

/**
 * Wczytuje do tablicy array kolejno n liczb
 **/ 
void read(int n) {
    for (int i = 0; i < n; i++) 
        cin >> array[i];
}

/**
 * Zwraca liczbe wsunietych szuflad, w przypadku jesli ostatnia szuflada
 * bylaby zamnkieta, lub "wcisnieta w sciane", zwraca -1.
 * 
 * dla kazdej szuflady, idac od dolu, sprawdza czy nie wystaje nad poprzednia.
 * jesli wystaje, wsuwamy ja i zwiekszamy wynik.
 **/ 
int solve(int n) {
    int result = 0;
    int current_min = array[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (array[i] >= current_min) {
            array[i] = current_min - 1;
            result++;
        }
        current_min = array[i];
    }
    if (array[0] <= 0)
        return -1;
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    read(n);
    cout << solve(n) << endl;
    return 0;
}