#include <iostream>
using namespace std;

/**
 * Ogolnym pomyslem na rozwiazanie zadania jest dla kazdego dnia:
 *       1) obliczyc ile sekund uplynelo od polnocy do poczatku pracy (linijka 28)
 *       2) obliczyc ile sekund uplynelo od polnocy do konca prayc (linijka 29)
 *       3) na tej podstawie obliczyc ile sekund trwala praca
 *       4) zsumowac caly czas pracy w sekundach (linijka 31) 
 * 
 * Na koncu nalezy oczywiscie sprowadzic czas w sekundach do formtu hh:mm:ss (linijki 34 do 38)   
 **/ 

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int total = 0;

    for (int i = 0; i < n; i++) {
        int h_begin, m_begin, s_begin;
        int h_end, m_end, s_end;

        cin >> h_begin >> m_begin >> s_begin;
        cin >> h_end >> m_end >> s_end;

        int begin = s_begin + 60 * m_begin + 3600 * h_begin;
        int end = s_end + 60 * m_end + 3600 * h_end;

        total += (end - begin);
    }

    int h_total = total / 3600;
    total = total % 3600;
    int m_total = total / 60;
    total = total % 60;
    int s_total = total;

    cout << h_total << ":";
    if (m_total < 10)
        cout << "0" << m_total << ":";
    else
        cout << m_total << ":";
    
    if (s_total < 10)
        cout << "0" << s_total << endl;
    else
        cout << s_total << endl;


    return 0;
}