// Includo direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione tangente

double tangente(double a) {

    return tan(a);

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    double num;
    double risultato;

    cout << "--TangenteNumero--\n";

    // Inserimento numero

    cout << "\nInserisci numero: ";
    cin >> num;

    // Chiamata funzione tangente e risultato
    
    risultato = tangente(num);
    cout << "\nRisultato: " << risultato;

    return 0;

}