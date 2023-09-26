// merge sort program
#include <stdio.h>
#include <stdlib.h>

// merge function that merges two subarrays of arr[]
// 1st subarray is arr[l..m]
// 2nd subarray is arr[m+1..r]
void merge(float arr[], int l, int m, int r)
{
    int i, j, k;
    int a = m - 1 + 1;
    int b = r - m;
    // temp arrays
    int L[a], R[b];

    // copy data to temp arrays
    for(i = 0; i < a; i++)
    {
        L[i] = arr[l + i];
    }
    for(j = 0; j < b; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    // merge temp arrays back into arr[]
    i = 0;
    j = 0;
    k = l;
    while (i < a && j < b)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            i++;
        }
        k++;
    }

    // copy remaining elements of L[] & R[]
    while (i < a)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < b)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// function that implements merge sort
void mergeSort (float arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - 1) / 2;

        // sort 1st and 2nd halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
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

    mergeSort(arr, 0, size - 1);
    printf("Sorted array: \n");
    printArray(arr, size);
    return 0;
}