#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
}

void insertionSort(int a[], int n)
{
   int i, k, j; 
   for (i = 1; i < n; i++) 
   {
       k = a[i]; // first unsorted element
       j = i - 1 ;
       while (j >= 0 && k < a[j]) 
       {
           a[j+1] = a[j]; // move each value forward
           j -= 1; 
       }    
       a[j+1] = k; 
   } 
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    insertionSort(a, n);
    printArray(a, n);
}