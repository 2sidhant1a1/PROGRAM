#include <stdio.h>
// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low+1;
    int j = high;

    while(i <= j) {
        
        while(arr[i] <= pivot && i <= high)
        {
            i++;
            continue;
        }
        while(arr[j] >= pivot) {
            j--;
            continue;
        }
        if(i<j)
            swap(&arr[i],&arr[j]);
    }
    swap(&arr[low], &arr[j]);
    return j;
}
// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// Main function
int main() {
    int arr[] = {161,175,153,180,130,178};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}