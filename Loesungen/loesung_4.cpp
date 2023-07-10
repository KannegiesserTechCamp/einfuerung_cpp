/* loesung_4.cpp */
#include <stdio.h>

int main()
{
    //TODO:
    // * Erstelle eine Variable mit einem geeigneten Datentyp. In der Variable sollen nur ganze Zahlen gespeichert werden können.
    int zahl = 15;


    //TODO:
    // * Wenn die Zahl größer als 10 ist, soll das Wort "Übungsaufgabe 4" so oft ausgegeben werden, wie es die Zahl in der Variable sagt. Dabei soll wieder jeweils auf den Zeilenumbruch geachtet werden.
    if(zahl > 10)
    {
        for(int i=0; i<zahl; i++)
        {
            printf("Übungsaufgabe 4 \n");
        }
    }
    
    //TODO:
    // * Wenn die Zahl unter oder gleich 10 ist, soll der Wert in der Variable ausgegeben werden.
    else
    {
        printf("Wert von Zahl= %d", zahl);
    }
    return 0;
}