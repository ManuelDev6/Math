// Includo direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione eccesso

float eccesso(float a) {

    return ceil(a);

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    float num;
    float risultato;

    cout << "--ArrotondamentoPerEccesso--\n";

    // Inserimento numero

    cout << "\nInserisci un numero: ";
    cin >> num;

    // Chiamata funzione eccesso e risultato
    
    risultato = eccesso(num);
    cout << "\nRisultato: " << risultato;

    return 0;

}