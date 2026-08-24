// Includo direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione minimo

int minimo(int a,int b) {

    return min(a,b);

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int risultato;

    cout << "--NumeroMinimo--\n";

    // Inserimento primo numero

    cout << "\nInserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    // Chiamata funzione minimo e risultato
    
    risultato = minimo(num1,num2);
    cout << "\nRisultato: " << risultato;

    return 0;

}