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

int getMax(int arr[], int n)
{
    int max = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}

void countSort(int arr[], int size, int digit)
{
    int output[size];
    int count[10] = {0};
    int i;
    
    for(i=0; i<size; i++)
        count[(arr[i]/digit)%10]++;
    for(i=1; i<10; i++)
        count[i] += count[i-1];
    for(i=size-1; i>=0; i--)
    {
        output[count[(arr[i]/digit)%10]-1]= arr[i];
        count[(arr[i]/digit)%10]--;
    }
    for(i=0; i<size; i++)
        arr[i]=output[i];
}

void radixSort(int arr[], int size)
{
    int max = getMax(arr,size);
    for(int digit=1; max/digit>0; digit*=10)
        countSort(arr,size,digit);
}
int main()
{
    int A[6] = {5,2,4,6,1,3};
    int A_size = sizeof(A)/sizeof(A[0]);
    radixSort(A,A_size);
    printArray(A,A_size);
}