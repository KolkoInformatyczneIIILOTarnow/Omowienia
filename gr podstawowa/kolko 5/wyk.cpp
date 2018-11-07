#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int next = 1; // dopuki nie zostanie wprowadzona liczba rowna
                  // zmiennej next wykreslamy wszystkie liczby jakie sie pojawia
    int result = 0;  
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        // jesli wrowadzona liczba jest kolena liczba naturalna, ktora oczekujemy,
        // to nie wykreslamy jej i zaczynamy oczekiwac nastepnej ( zwiekszmy next o 1 ) 
        if (t == next) {
            next++;
        }
        else {
            result++;
        }
    }
    cout << result << endl;
}