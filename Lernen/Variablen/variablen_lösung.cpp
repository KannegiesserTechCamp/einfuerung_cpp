/* variablen.cpp */
#include <stdio.h>

int main() {
    // TODO:
    // 1. Variablen Initialisieren
    //      * Initialiesiere eine Variable vom Typ int mit dem Namen zahl
    //      * Initialiesiere eine Variable vom Typ char mit dem Namen buchstabe
    //      * Initialiesiere eine Variable vom Typ char[] mit dem Namen wort
    // ================ START ================
    // ****** Füge hier deinen Code ein ******
    int zahl;
    char buchstabe;
    char wort[20];
    // ================ ENDE ================

    // TODO:
    // 2. Variablen Zuweisen
    //      * Weise der Variable mit dem Namen zahl den Wert 1 zu
    //      * Weise der Variable mit dem Namen buchstabe den Wert 'k' zu
    //      * Weise der Variable mit dem Namen wort den Wert "Kannegiesser" zu
    // ================ START ================
    // ****** Füge hier deinen Code ein ******
    zahl = 1;
    buchstabe = 'k';
    sprintf(wort, "Kannegiesser");
    // ================ ENDE ================

    // TODO:
    // 3. Variablen Ausgaben
    //      * Gebe die Variable mit dem Namen zahl in der Console aus
    //      * Gebe die Variable mit dem Namen buchstabe in der Console aus
    //      * Gebe die Variable mit dem Namen wort in der Console aus
    // ================ START ================
    // ****** Füge hier deinen Code ein ******
    printf("Zahl: %d\n", zahl);
    printf("Buchstabe: %c\n", buchstabe);
    printf("Wort: %s\n", wort);
    // ================ ENDE ================

    // TODO:
    // 4. Variablen Zuweisen
    //      * Weise der Variable mit dem Namen zahl den Wert 2 zu
    //      * Weise der Variable mit dem Namen buchstabe den Wert 'm' zu
    //      * Weise der Variable mit dem Namen wort den Wert "Muster" zu
    // ================ START ================
    // ****** Füge hier deinen Code ein ******
    zahl = 2;
    buchstabe = 'm';
    sprintf(wort, "Muster");
    // ================ ENDE ================
    
    // TODO:
    // 5. Variablen Ausgaben
    //      * Gebe die Variable mit dem Namen zahl in der Console aus
    //      * Gebe die Variable mit dem Namen buchstabe in der Console aus
    //      * Gebe die Variable mit dem Namen wort in der Console aus
    // ================ START ================
    // ****** Füge hier deinen Code ein ******
    printf("Zahl: %d\n", zahl);
    printf("Buchstabe: %c\n", buchstabe);
    printf("Wort: %s\n", wort);
    // ================ ENDE ================
    return 0;
}
