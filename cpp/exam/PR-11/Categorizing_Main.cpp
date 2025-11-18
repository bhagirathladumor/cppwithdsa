#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &a, int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(a[j] > a[minIndex]){
                minIndex = j;
            }
        }
        int swap = a[minIndex];
        a[minIndex] = a[i];
        a[i] = swap;
    }
}
void merge(vector<int> &a, int start, int mid, int end){
    int i = start;
    int j = mid+1;
    vector<int> temp;
    while(i <= mid && j <= end){
        if (a[i] <= a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }

    }
    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        a[i + start] = temp[i];
    }
}

void mergeSort(vector<int> &a, int start, int end){
    int mid = (start + end) /2;

    if (start < end)
    {
        mergeSort(a, 0, mid);
        mergeSort(a, mid+1, end);
        merge(a, start, mid, end);
    }
}

int binary_search(vector<int> &a, int n, int element){
    int start = 0;
    int end = n - 1;
    
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (element < a[mid])
        {
            end = mid - 1; 
        }
        else if(element > a[mid]){
            start = mid + 1;
        }
        else{
            return mid;
        }
        
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n,element;

    cout << "Enter the Number of Array";
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int value;
        cout << "Enter the Value";
        cin >> value;
        a.push_back(value);
    }

    cout << endl << endl << "Enter the element you went to search";
    cin >> element;


    cout << endl << "Original Array";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    

    selectionSort(a, n);
    
    cout << endl << endl << "Descending Order";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    mergeSort(a, 0, n-1);

    cout << endl << endl << "The Sorted Array is";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    int result = binary_search(a, n, element);
        cout << endl << endl;
    if(result == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found at" << result << endl;

    }
    
    return 0;
}