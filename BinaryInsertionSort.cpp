#include <iostream>
using namespace std;
int binarySearch(int a[], int item, int low, int high)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (item == a[mid])
            return mid + 1;
        else if (item > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
void insertionSort(int a[], int n)
{
    int i, location, j, k, selected;
 
    for (i = 1; i < n; ++i) {
        j = i - 1;
        selected = a[i];
        // find location where selected should be inserted
        location = binarySearch(a, selected, 0, j);
        // Move all elements after location to create space
        while (j >= location) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}
 
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
	}
    insertionSort(a, n);
    cout <<"Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
    	cout << a[i]<<" ";
	}
    return 0;
}
