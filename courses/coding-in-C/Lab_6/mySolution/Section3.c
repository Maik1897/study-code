/*
    File:
    Description:
*/

#define fixed_size 3000 // 60 sekunden gemessen, 0,02 Samples = 3000 Messwerte
#define step_size 0,02 

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
    int id;
    double treshold;
    SensorData Data[fixed_size];
    int object_detection[fixed_size];
} Sensor;

int read_sensor_data(Sensor *p_sensor, const char *p_filename)
{
    FILE *p_file = fopen("sensor1.txt", "r");
    if(p_file == NULL)
    {
        printf("File: %s could not be opened.\n", p_filename);
        return -1;
    }

    int i = 0;
    while(i < fixed_size)
    {
       if(fscanf(p_file, "%f" "%lf", &p_sensor->Data[i].time, &p_sensor->Data[i].probability) != 2);
       {
        printf("Incorrect file format detected. Program stopped.\n");
        fclose(p_file);
        return -1;
       }
       i++;
    }
    fclose(p_file);
    return 0;
}

void get_object_detection(Sensor *p_sensor, SensorData *p_sensordata)
{
    for(int i = 0; i < fixed_size; i++)
    {
        if(p_sensor->treshold < p_sensordata->probability)
        {
            p_sensor->object_detection[i] = 1;
        }
        else
        {
            p_sensor->object_detection[i] = 0;
        }
    }
    
}

void fusing_sensors(int sensor1_detect[], int sensor2_detect[], int fusion[])
{
    for(int i = 0; i < fixed_size; i++)
    {
        fusion[i] = sensor1_detect[i] && sensor2_detect[i];
    }
}

void print_interval(float start[], float end[], const char *label)
{
    int i = 0;
    while (start[i] >= 0)
    {
        printf("Start: %2f End: %2f", start[i], end[i]);
        i++;
    }
    printf("\n");
}





int main()
{
    




    return 0;
}





