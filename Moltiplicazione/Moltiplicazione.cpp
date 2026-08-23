// Includo le direttive

#include <iostream>
using namespace std;

// Funzione moltiplicazione

int moltiplicazione(int a,int b) {

    return a * b;

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int risultato;

    cout << "--Moltiplicazione--\n";

    // Inserimento primo numero

    cout << "\nInserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    // Chiamata funzione moltiplicazione e risultato
    
    risultato = moltiplicazione(num1,num2);
    cout << "\nRisultato: " << risultato;

    return 0;

}