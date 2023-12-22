#include <bits/stdc++.h>
using namespace std;
void swap(int a[], int b[]) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
       cout << A[i] << " ";
    }
    
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        { 
            swap(A[i],A[j]);
        
        }
    } while (i < j);

   swap(A[low],A[j]);
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    //int A[] = {9, 4, 4, 8, 7, 5, 6};

    int n = 9;
    printArray(A, n);
    quickSort(A, 0, n - 1); cout<<endl;
    printArray(A, n);
    return 0;
}
