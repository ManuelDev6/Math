// Includo le direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione vicino

float vicino(float a) {

    return round(a);

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    float num;
    float risultato;

    cout << "--ArrotondamentoNumeroVicino--\n";

    // Inserimento numero

    cout << "\nInserisci un numero: ";
    cin >> num;

    // Chiamata funzione vicino e risultato
    
    risultato = vicino(num);
    cout << "\nRisultato: " << risultato;

    return 0;

}