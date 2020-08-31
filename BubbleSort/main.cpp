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

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}

int main()
{
    int A [6] = {5,2,4,6,1,3};
    int A_size = sizeof(A)/sizeof(A[0]);
    bubbleSort(A,A_size);
    printArray(A,A_size);
}
