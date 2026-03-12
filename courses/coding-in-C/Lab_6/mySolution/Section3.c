/*
    File:
    Description:
*/

#define fixed_size 3000

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct 
{
    float time;
    double probability;
} SensorData;

typedef struct 
{
    int SensorID;
    double detect_treshold;
    int arr_Data[fixed_size];
    int arr_intObject_detect[fixed_size];
} Sensor;


int main()
{
    SensorData *p_SensorData;
    Sensor *p_Sensor;

    // 1. Open the sensor data files and check wether the files can be opened

    FILE *p_data1 = fopen("sensor1.txt", "r+");
    if(p_data1 == NULL)
    {
        printf("Could not open Sensor1.\n");
        return -1;
    }

    FILE *p_data2 = fopen("sensor2.txt", "r+");
    if(p_data2 == NULL)
    {
        printf("Could not open Sensor2.\n");
        return -1;
    }

    // fscanf --> Formatbasiertes lesen!! read the two measurement files into sensor structs
    fscanf(p_data1, "d", p_Sensor->arr_Data);
   // fscanf(p_data2, "d");

    printf("%d\n", p_Sensor->arr_Data);

    p_data1 = p_Sensor->arr_Data;


    // 2. generare a binary detection signal based on its treshold
    if(p_Sensor->detect_treshold < p_SensorData->probability)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }





}





