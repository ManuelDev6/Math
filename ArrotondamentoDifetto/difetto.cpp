// Includo le direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione difetto

float difetto(float a) {

    return floor(a);

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    float num;
    float risultato;

    cout << "--ArrotondamentoPerDifetto--\n";

    // Inserimento numero

    cout << "\nInserisci un numero: ";
    cin >> num;

    // Chiamata funzione difetto e risultato
    
    risultato = difetto(num);
    cout << "\nRisultato: " << risultato;

    return 0;

}