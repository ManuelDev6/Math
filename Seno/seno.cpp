// Includo direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione seno

double seno(double a) {

    return sin(a);

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    double num;
    double risultato;

    cout << "--SenoNumero--\n";

    // Inserimento numero

    cout << "\nInserisci numero: ";
    cin >> num;

    // Chiamata funzione seno e risultato
    
    risultato = seno(num);
    cout << "\nRisultato: " << risultato;

    return 0;

}