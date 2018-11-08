#include <iostream>
using namespace std;

int binarySearchRecursive(int a[], int start, int end, int x){
    
    if(start <= end){
        int mid = start + (end - start)/2;
        
        if (x == a[mid]){
            return mid;
        } else if (x > a[mid]){
            return binarySearchRecursive(a, mid + 1, end, x);
        } else {
            return binarySearchRecursive(a, start, mid - 1, x);
        }
    }
    return -1;
    
}

int binarySearchIterative(int a[], int n, int x){
    
    int start = 0;
    int end = n - 1;
    
    while(start <= end){
        int mid = (start + end) /2;
        
        if (x == a[mid]){
            return mid;
        } else if (x > a[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n , x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i){
    	cin >> a[i];
    }
    cin >> x;
    cout << binarySearchIterative(a, n, x);
}