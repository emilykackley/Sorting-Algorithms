#include <iostream>

using namespace std;

int partition(int arr[], int low, int high)
{
    // The pivot is the last element
    int pivot = arr[high];
    int i = low - 1;
    for(int j=low; j<=high-1;j++)
    {
        // Check if current element is smaller than the pivot
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return(i+1);
}
void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pIndex = partition(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
    
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int A[6] = {5,2,4,6,1,3};
    int A_size = sizeof(A)/sizeof(A[0]);
    quickSort(A,0,A_size-1);
    printArray(A,A_size);
}