#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//finds the minimum and maximum of given values
void Minimum_Maximum(float arr[], int size)
{
    float min, max;
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < size; i++)
    {
        //for minimum
        if (min > arr[i])
        {
            min = arr[i];
        }

         //for maximum
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("Min: %4.1f ", min);
    printf("\nMax: %4.1f ", max);
}

//finds the average of given values
void Average(float arr[], int size)
{
    float sum = 0.0;
    float average = 0.0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    average = sum / size;
    printf("\nAvg: %4.1f ", average);
}

//finds the standard deviation of given values
void Standard_Deviation(float arr[], int size)
{
    float sum = 0.0;
    float avg;
    //initialize a value for standard deviation
    float std = 0.0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / size;
    for (int i = 0; i < size; i++)
    {
        std += pow(arr[i] - avg, 2);
    }
    //final standard deviation value
    float STD = sqrt(std / size);
    printf("\nStd: %0.6f ", STD);

}

int main() 
{
    FILE *inputFile = fopen("input 1.txt", "r");
    int size = 0;
    float* arr = malloc(size);
    
    while (fscanf(inputFile, "%f", &arr[size]) == 1)
    {
        size++;
    }

    Minimum_Maximum(arr, size);
    Average(arr, size);
    Standard_Deviation(arr, size);
}