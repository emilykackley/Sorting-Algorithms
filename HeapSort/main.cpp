#include <iostream>

using namespace std;

void heapify(int arr[],int heapSize,int node)
{
    int largest = node;
    int left = 2*node + 1;
    int right = 2*node +2;
    
    //Check if left is larger than root
    if(left < heapSize && arr[left] > arr[largest])
        largest = left;
    //Check if right is larger than root
    if(right < heapSize && arr[right] > arr[largest])
        largest = right;
    //Check if largest is not root
    if(largest != node)
    {
        swap(arr[node], arr[largest]);
        //Recursively heapify the affected sub-tree
        heapify(arr,heapSize,largest);
    }
}

void heapSort(int arr[], int size)
{
    for(int i = size/2 -1; i>=0; i--)
    {
        //Create a max heap
        heapify(arr,size,i);
    }
    
    for(int i=size-1; i>0; i--)
    {
        //Swap first and last node
        swap(arr[0], arr[i]);
        //Create max heap on reduced array
        heapify(arr,i,0);
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
    heapSort(A,A_size);
    printArray(A,A_size);
}