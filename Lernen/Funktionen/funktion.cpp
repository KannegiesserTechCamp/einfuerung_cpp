/* funktion.cpp */

#include <stdio.h>

int main()
{
    int return_value;

    // Aufruf der Funktion funk1 mit dem Argument 2
    return_value = funk1(2);
    printf("Der Return Value von funk1 beträgt: %d\n", return_value);
}

// Definition der Funktion funk1
int funk1(int zahl){
    
    // Erhöhe den Wert von zahl um 1
    zahl = zahl + 1;
    
    // Gib den neuen Wert von zahl zurück
    return zahl;
}