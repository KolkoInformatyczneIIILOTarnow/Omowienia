#include <iostream>

using namespace std;

/**
 * Oblicza silnie modulo 100 w konwencjonalny sposob
 * a na konciu wypisuje cyfre dziesiatek i jednosci; 
 **/
void compute_factorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n ;i++) {
        factorial = (factorial * i) % 100;
    }
    cout << factorial / 10 << " " << factorial % 10 << endl;
}

/**
 * Wypisuje dwie ostatnie cyfry liczby n!.
 **/
void solve(int n) {
    if (n > 10) {
        cout << "0 0" << endl;
    }
    else {
        compute_factorial(n);
    }
}

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}