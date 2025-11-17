#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int swap = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = swap;
    }
}
void linear search(int arr[],int n)
{
   for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
        if (n==arr-)
    }
   }
}
int main()
{
    int n;

    cout << "Enter Number of Array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Value of a[" << i << "] :";
        cin >> arr[i];
    }

    cout << "Original Array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    selectionSort(arr, n);
    
    cout << "Updated Array := ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}