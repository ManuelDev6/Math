// Includo direttive e librerie

#include <iostream>
using namespace std;

// Funzione addizione

int addizione(int a,int b) {

    return a + b;

}

// Funzione sottrazione

int sottrazione(int a,int b) {

    return a - b;

}

// Funzione moltiplicazione

int moltiplicazione(int a,int b) {

    return a * b;

}

// Funzione divisione

int divisione(int a,int b) {

    return a / b;

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int risultato;
    int opz;

    cout << "--CalcolatriceBase--\n";

    // Menu principale

    cout << "\nOpzioni disponibili: ";

    cout << "\n1: Addizione";
    cout << "\n2: Sottrazione";
    cout << "\n3: Moltiplicazione";
    cout << "\n4: Divisione";

    // Inserimento opzione

    cout << "\n\nInserisci un opzione(1/4): ";
    cin >> opz;

    // Inserimento primo numero

    cout << "\nInserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "\nInserisci il secondo numero: ";
    cin >> num2;

    // Ciclo switch per opzione

    switch(opz) {

        // Caso addizione

        case 1:

            // Chiamata funzione addizione e risultato

            risultato = addizione(num1,num2);
            cout << "\nRisultato: " << risultato;

            break;
        
        // Caso sottrazione

        case 2:

            // Chiamata funzione sottrazione e risultato

            risultato = sottrazione(num1,num2);
            cout << "\nRisultato: " << risultato;

            break;

        // Caso moltiplicazione

        case 3:

            // Chiamata funzione moltiplicazione e risultato

            risultato = moltiplicazione(num1,num2);
            cout << "\nRisultato: " << risultato;

            break;

        // Caso divisione

        case 4:

            // Chiamata funzione divisione e risultato
            
            risultato = divisione(num1,num2);
            cout << "\nRisultato: " << risultato;

            break;

    }

    return 0;

}