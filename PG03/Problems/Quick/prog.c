// quick sort program reference https://www.programiz.com/dsa/quick-sort
#include <stdio.h>
#include <stdlib.h>

// function to swap elements that is used in quick sort
void swap (float* a, float* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to find the partition position
int partition(float array[], int low, int high) 
{
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) 
  {
    if (array[j] <= pivot) 
    {
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

// function that implements quick sort
void quickSort(float array[], int low, int high) 
{
  if (low < high) 
  {
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
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

    quickSort(arr, 0, size - 1);
    printf("Sorted array: \n");
    printArray(arr, size);
    return 0;
}