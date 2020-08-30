#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    // Create temp arrays for left and right
    int L[n1], R[n2]; 
  
    // Copy data to temp arrays L[] and R[] 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    // Merge the temp arrays back into arr[]
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    // Copy the remaining elements of L[]
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of R[]
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and r
        int m = l + (r - l) / 2; 
  
        // Split the subarrays until there are single elements 
        // in each array
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    }
}

int main()
{
    int A [6] = {5,2,4,6,1,3};
    int A_size = sizeof(A)/sizeof(A[0]);
    mergeSort(A,0,A_size-1);
    printArray(A,A_size);
}
