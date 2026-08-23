// Includo direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione RadiceCubica

int radCub(int a) {

    return cbrt(a);

}

// Funzione principale

int main() {

    // Dchiarazione variabili utili al programma

    int num;
    int risultato;

    cout << "--RadiceCubica--\n";

    // Inserimento numero

    cout << "\nInserisci un numero: ";
    cin >> num;

    // Chiamata funzione radCub e risultato
    
    risultato = radCub(num);
    cout << "\nRisultato: " << risultato;

    return 0;

}