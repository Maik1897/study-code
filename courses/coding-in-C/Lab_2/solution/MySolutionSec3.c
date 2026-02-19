/* Lab2 Section 3
 * File: MySolutionSec3.c
 * Description: Simple calculator program
 */


 #include <stdio.h>

 int main()
 {
    for (int col = 0; col <8; col++) // Buchstaben von A bis H
    {   
        char column = 'A' + col; 
        printf("%4.9c", column); // %5c -> 5 Leerzeichen bis erstes char Element
    }
    printf("\n");

    printf(" ");
    for (int border = 0; border < 8; border++)
    {  
        printf("+---");   
    }
    printf("+");

    printf("\n");

    for (int num = 8; num > 0; num --)
        {  
            int number = num;
            printf("%d\n", number);
             
            printf(" ");
            for (int i = 0; i <8; i++)
            {
                printf("|###");
                
            }
            printf("|");
             
           
        }
    

    

    return 0; 
 }