//
// Created by julia on 28/12/2023.
//
#include <iostream>
#include <algorithm>

const int MAX = 1000;

using namespace std;

#include "ArbreCerca.h"


int main() {
    int t[MAX];
    int n=0, v;

    cout << "Entra una sequencia d'enters acabada en 0 (1000 valors com a molt):" << endl;
    cin >> v;
    while (n<MAX and v!=0) {
        t[n] = v;
        n++;
        cin >> v;
    }
    sort(t, t+n);

    ArbreCerca a(t, n);
    a.MostrarPre();

    return 0;
}
