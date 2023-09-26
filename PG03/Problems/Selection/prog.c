// selection sort program
#include <stdio.h>
#include <stdlib.h>

// function to swap elements that is used in selection sort
void swap (float* a, float* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function that implements selction sort
void selectionSort(float arr[], int n)
{
    //minimum element
    int min;
    for(int i = 0; i < n - 1; i++)
    {
        // find min element in array
        min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        // swap found min element with 1st element
         if(min != i)
            {
                swap(&arr[min], &arr[i]);
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

    selectionSort(arr, size);
    printf("Sorted array: \n");
    printArray(arr, size);
    return 0;
}