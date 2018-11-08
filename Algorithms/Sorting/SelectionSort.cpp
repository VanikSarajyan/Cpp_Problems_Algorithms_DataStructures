#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
}

void selectionSort(int a[], int n)
{
    int i,j;
    for(i = 0; i < n - 1; ++i)
    {
        int minInd = i;
        for(j = i + 1; j < n; ++j)
        {
            if(a[j] < a[minInd])
            {
                minInd = j;
            }
        }
        swap(a[i], a[minInd]);
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
    selectionSort(a, n);
    printArray(a, n);
}