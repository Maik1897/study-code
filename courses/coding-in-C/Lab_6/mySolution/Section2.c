/*
*  File: section2.c
*  Description: fuel levels
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    float fuel_level;
    float max_fuel_level;
    char arr_model[];
} Car;

void refuel(Car *p_car, float addFuel)
{
    if(p_car->fuel_level + addFuel < p_car->max_fuel_level)
    {
       p_car->fuel_level = p_car->fuel_level + addFuel;
    }
    else
    {
        printf("Reached max fuel level.\n");
    }
}


int main()
{
    Car *p_car;
    float addFuel = 4;
    
    p_car->fuel_level = 15;
    p_car->max_fuel_level = 50;

    refuel(p_car, addFuel);

    printf("%f\n", p_car->fuel_level);



}