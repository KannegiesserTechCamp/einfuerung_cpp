/* if_else.cpp */

#include <stdio.h>
#include <string> // string-Bibliothek einbinden
using namespace std; // std-Namensraum verwenden

int main()
{
    // ================ START ================
    // Initialisieren
    int zahl = 4;

    // Bedingungen definieren
    bool bedingung1 = zahl < 1; 
    bool bedingung2 = zahl > 1;
    
    // Überprüfen, ob Bedingung 1 erfüllt ist
    if(bedingung1)
    {
        printf("Bedingung 1 wird erfüllt\n");
    }
    // Überprüfen, ob Bedingung 2 erfüllt ist
    else if(bedingung2)
    {
        printf("Bedingung 2 wird erfüllt\n");
    }
    // Wenn keine der beiden Bedingungen erfüllt ist
    else
    {
        printf("Besindung 1 & 2 wurden NICHT erfüllt\n");
    }
    // ================ ENDE ================
    return 0;
}
