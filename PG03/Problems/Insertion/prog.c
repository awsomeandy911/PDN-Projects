// insertion sort program
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

// function that implements insertion sort
void insertionSort(float arr[], int n)
{
    
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // moves elements of array that are greater than key to one ahead of current position
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// function that prints the sorted array
void printArray(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4.1f ", arr[i]);
    }
    printf("\n");
}

int main()
{
    FILE *fp;
    fp = fopen("input.txt", "r");
    int size = 0;
    float* arr = malloc(size);

    while (fscanf(fp, "%f", &arr[size]) == 1)
    {
        size++;
    }

    insertionSort(arr, size);
    printf("Sorted array: \n");
    printArray(arr, size);
    return 0;
}