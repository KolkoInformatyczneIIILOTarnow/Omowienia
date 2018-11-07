#include <iostream>
using namespace std;

/**
 * Greatest common divisor, czyli najwiekszy wspolny dzielnik
 * liczb a, b podanych jako argumenty.
 * Obliczamy go za pomoca algorytmu euklidesa:
 * http://www.algorytm.edu.pl/algorytmy-maturalne/algorytm-eulkidesa.html
 **/ 
int greatest_common_divisor(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

/**
 * Lowest common multiple, czyli najmniejsza wspolna wielokrotnosc
 * liczb a, b podanych jako argumenty.
 * Do obliczenia lcm poslozymy sie algorytmem na nwd i skorzystamy, ze
 * (a * b) / nwd(a, b) = nww(a, b) 
 **/ 
int lowest_common_multiple(int a, int b) {
    return (a * b) / greatest_common_divisor(a, b);
}

/**
 * Wartosc bezwzgledna podanej liczby.
 **/ 
int abs(int a) {
    if (a < 0)
        return -a;
    return a;
}

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    int lcm = lowest_common_multiple(b, d);

    //rozszerzamy liczniki zeby odpowiadaly ulamka z wsplnym mianownikiem
    a *= lcm / b;
    c *= lcm / d;

    // (a - c)  / lcm - wynik w postaci nieskroconego ulamka
    int gcd = greatest_common_divisor(abs(a - c), lcm);
    //((a - c) / gcd) / (lcm / gcd) - wynik w postaci skroconej

    int result_up = (a - c) / gcd;
    int result_down = lcm / gcd;

    // jesli licznik jest rowny 0 to wypisujemy 0 i konczymy program.
    if (result_up == 0) {
        cout << "0" << endl;
        return 0;
    }

    // sprawdzamy czy nie ma czesci calkowitej
    // jesli tak, to wypisujemy ja
    // pamietamy, ze jesli wynik jest ujemny to minus wypisze sie przy czesci calkowitej
    if (result_up / result_down != 0) {
        cout << result_up / result_down << " ";
        result_up %= result_down;
        result_up = abs(result_up);
    }

    // sprawdzamy czy jest czesc ulamkowa
    // jesli tak, to wypisujemy ja
    if (result_up != 0) {
        cout << result_up << "/" << result_down;
    }
    cout << endl;
    return 0;
}