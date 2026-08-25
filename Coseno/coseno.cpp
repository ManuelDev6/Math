// Includo direttive e librerie

#include <iostream>
#include <cmath>

using namespace std;

// Funzione coseno

double coseno(double a) {

    return cos(a);

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    double num;
    double risultato;

    cout << "--CosenoNumero--\n";

    // Inserimento numero

    cout << "\nInserisci numero: ";
    cin >> num;

    // Chiamata funzione coseno e risultato
    
    risultato = coseno(num);
    cout << "\nRisultato: " << risultato;

    return 0;

}