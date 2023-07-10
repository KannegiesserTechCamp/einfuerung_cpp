/* loesung_5.cpp */
#include <stdio.h>

//TODO: (1.)
// * Erstelle eine Funktion, die zwei übergegebene Zahlen miteinander multipliziert und das Ergebnis zurückgibt.
// HELP: int multi(int z1, int z2){}
int multi(int z1, int z2)
{
    return z1 * z2;
}


int main()
{
    //TODO: HELP: Variablen zahl1, zahl2 und ergebnis initialisieren und zuweisen
    int zahl1 = 5;
    int zahl2 = 4;
    int ergebnis;


    //TODO: (2.)
    // * In der Main soll Das Ergebnis zwischen gespeichert werden und dann ausgegeben werden. 
    ergebnis = multi(zahl1, zahl2);

    printf("Das Ergebnis ist %d ", ergebnis);
    return 0;
}
