#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printArray(float arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bucketSort(float arr[], int n)
{
    // Create n number of buckets
    vector<float> b[n];
    
    // Separate into different buckets
    for(int i=0; i<n; i++)
    {
        int bi = n*arr[i];
        b[bi].push_back(arr[i]);
    }
    
    // Sort individual buckets
    for(int i=0; i<n; i++)
    {
        sort(b[i].begin(),b[i].end());
    }
    
    // Join all buckets back to arr[]
    int ind = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<b[i].size();j++)
            arr[ind++] = b[i][j];
}

int main()
{
    float A[] = {.8, .53, .12, .64, .53, .52,.99};
    int A_size = sizeof(A)/sizeof(A[0]);
    bucketSort(A,A_size);
    printArray(A,A_size);
}