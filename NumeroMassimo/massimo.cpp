// Includo direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione massimo

int massimo(int a,int b) {

    return max(a,b);

}

// Funzione principale(main);

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int risultato;

    cout << "--NumeroMassimo\n";

    // Inserimento primo numero

    cout << "\nInserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    // Chiamata funzione massimo e risultato

    risultato = massimo(num1,num2);
    cout << "\nRisultato: " << risultato;

    return 0;

}