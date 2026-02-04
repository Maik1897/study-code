#include <stdio.h>

int main() {

    
    // Zeilen von 8 bis 1
    for (int row = 8; row >= 1; row--)
    { 
        // Spalten von A bis H
        for (int col = 0; col < 8; col++)
        {
            char letter = 'A' + col;
            printf("%c%d ", letter, row);
        }
        printf("\n"); // Neue Zeile nach jeder Reihe
    }
  

    return 0;
}




