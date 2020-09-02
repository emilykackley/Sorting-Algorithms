#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void countSort(int arr[], int size, int max)
{
    int count[max+1];
    int output[size+1];
    int i=0;
    
    // Set all count values to zero
    for(int i = 0; i<=max; i++)
        count[i] = 0;     
    // Increase the number count for each value in the array
    for(int i = 0; i <size; i++)
        count[arr[i]]++;
    // Find the cumulative frequency
    for(int i = 1; i<=max; i++)
        count[i] += count[i-1]; 
    // Create the output array and decrease counts
    for(int i = size-1; i>=0; i--) 
    {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--; 
    }
    // Save output to original array
    for(int i = 0; i<=size; i++) 
    {
        arr[i] = output[i]; 
    }
}

int main()
{
    int A[6] = {5,2,4,6,1,3};
    int A_size = sizeof(A)/sizeof(A[0]);
    countSort(A,A_size,6);
    printArray(A,A_size);
}