/*
 * File: Section1.c
 * Description: Lab7 sec. 1 get used with fgetc, fgets, fscanf,..
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main()
 {

    // fgetc 
    FILE *p_datei1 = fopen("sec1.txt", "r+");
    if(p_datei1 == NULL)
    {
        printf("Fehler beim öffnen der Datei");
        return -1;
    }
    
    // // char c_datei1 = fgetc(p_datei1);

    // // printf("First Element: %c\n", c_datei1);

    // // fgets

    char string[100];

    // fgets(string, sizeof(string), p_datei1);

    // printf("Zeile: %s\n", string); 


    // fscanf

    fscanf(p_datei1, "%s", string);

   // printf("%s\n", string);

    // fputc

    int c = 1;
    char cc = 'b';
    fputc(cc, p_datei1);
    
    // fgets(string, sizeof(string), p_datei1);

    // printf("Zeile: %s\n", string);

    // fputs

    char string1[10] = {'k', 'b'};
    fputs(string1, p_datei1);

    // fprintf

    char string2[10] = {'H','A','H','A'};
    fprintf(p_datei1, "%s", string2);

    return 0;
 }