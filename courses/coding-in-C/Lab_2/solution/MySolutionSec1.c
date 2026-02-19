/* Lab2 Section 1
 * File: MySolutionSec1.c
 * Description: Simple calculator program
 */

 #include <stdio.h> 
 
 
 int main()
 {  
    for (int i = 8; i > 0; i--) // Spalten-Schleife von 8 bis 0
    {   
        for (int column = 0; column < 8; column++) // Schleife zur Inkrementierung der Buchstaben
        {
            char letter = 'A' + column; // Buchstaben beginnen bei A und werden bis H hochgezählt
            int row = i; // Zahlen von 8 bis 1 in jeder Spalte
            
            printf("%c%d ", letter, row);
            
        }

        printf("\n\n"); // Doppelter Zeilenumbruch nachdem beide Schleifen einen Durchgang durchgeführt haben

    }
  
     return 0;
 }
























 /*int main()
 {  
    // Zeilen von 8 bis 1
    for(int row = 8; row >= 1; row--)
        {    // Spalten von A bis H
             for (int column = 0; column <= 8; column++)
            {   char letter = 'A' + column;
                 printf("%c%d ", letter, row);
                
            }
                
             printf("\n"); // Neue Zeile nach jeder Reihe
        
        }

        return 0;
 } */