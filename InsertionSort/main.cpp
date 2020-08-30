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

void insertionSort(int arr[], int size)
{
    int key,j;
    for(int i=1; i<size; i++)
    {
        key = arr[i];
        j = i-1;
        
        /*Move elements of arr[0...i-1], that are greater
        than the key, one position ahead of their current position
        and continue until that element is no longer greater 
        than the key */
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int A [6] = {5,2,4,6,1,3};
    int A_size = sizeof(A)/sizeof(A[0]);
    insertionSort(A,A_size);
    printArray(A,A_size);
}
