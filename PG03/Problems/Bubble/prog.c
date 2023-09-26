// bubble sort program
#include <stdio.h>
#include <stdlib.h>

// function to swap elements that is used in bubble sort
void swap (float* a, float* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function that implements bubble sort
void bubbleSort(float arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        // last i elements in place
        for(int j = 0; j < n - i; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

// function that prints the sorted array
void printArray (float arr[], int size)
{
    for(int i = 0; i < size; i++)
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

    bubbleSort(arr, size);
    printf("Sorted array: \n");
    printArray(arr, size);
    return 0;
}