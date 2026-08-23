// Includo direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione RadiceQuadrata

int radQuad(int a) {

    return sqrt(a);

}

// Funzione principale

int main() {

    // Dichiarazione variabili utili al programma

    int num;
    int risultato;

    cout << "--RadiceQuadrata--\n";

    // Inserimento numero

    cout << "\nInserisci un numero: ";
    cin >> num;

    // Chiamata funzione radQuad e risultato
    
    risultato = radQuad(num);
    cout << "\nRadice Quadrata: " << risultato;

    return 0;

}