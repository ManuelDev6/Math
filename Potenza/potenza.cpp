// Includo direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione Potenza

int potenza(int a,int b) {

    return pow(a,b);

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int risultato;

    cout << "--Potenza--\n";

    // Inserimento base

    cout << "\nInserisci la base: ";
    cin >> num1;

    // Inserimento esponente

    cout << "Inserisci l'esponente: ";
    cin >> num2;

    // Chiamata funzione Potenza e risultato
    
    risultato = potenza(num1,num2);
    cout << "\nRisultato: " << risultato;

    return 0;

}