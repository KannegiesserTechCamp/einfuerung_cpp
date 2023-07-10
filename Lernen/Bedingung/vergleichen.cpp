/* vergleichen.cpp */

#include <stdio.h>

int main()
{
    // ================ START ================
    // Initialisieren
    int x1;
    int x2;

    // Zuweisen
    x1 = 12;
    x2 = 10;

    // Ausgaben
    printf("x1=%i x2=%i x1 < x2 = %d\n", x1, x2, x1 < x2);    // kleiner als
    printf("x1=%i x2=%i x1 <= x2 = %d\n", x1, x2, x1 <= x2);  // kleiner oder gleich
    printf("x1=%i x2=%i x1 > x2 = %d\n", x1, x2, x1 > x2);    // größer als
    printf("x1=%i x2=%i x1 >= x2 = %d\n", x1, x2, x1 >= x2);  // größer oder gleich
    printf("x1=%i x2=%i x1 == x2 = %d\n", x1, x2, x1 == x2);  // gleich
    // ================ ENDE =================
    return 0;
}