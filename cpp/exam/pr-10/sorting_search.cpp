#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// Selection Sort
void selectionSort(vector<int>& a) {
    int n = (int)a.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j)
            if (a[j] < a[minIdx]) minIdx = j;
        if (minIdx != i) swap(a[i], a[minIdx]);
    }
}

// Merge helper
void merge(vector<int>& a, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; ++i) L[i] = a[l + i];
    for (int j = 0; j < n2; ++j) R[j] = a[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }
    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

// Merge Sort
void mergeSort(vector<int>& a, int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}

// Linear Search: returns index or -1
int linearSearch(const vector<int>& a, int key) {
    for (size_t i = 0; i < a.size(); ++i)
        if (a[i] == key) return (int)i;
    return -1;
}

// Binary Search (iterative). Assumes 'a' is sorted. Returns index or -1.
int binarySearch(const vector<int>& a, int key) {
    int l = 0, r = (int)a.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

void printArray(const vector<int>& a) {
    cout << "[";
    for (size_t i = 0; i < a.size(); ++i) {
        cout << a[i];
        if (i + 1 < a.size()) cout << ", ";
    }
    cout << "]\n";
}

bool isSortedAsc(const vector<int>& a) {
    for (size_t i = 1; i < a.size(); ++i)
        if (a[i - 1] > a[i]) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "Sorting & Searching tester\n";
    int n = 0;
    while (true) {
        cout << "Enter number of elements (positive integer): ";
        if (cin >> n && n > 0) break;
        cout << "Please enter a positive integer.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> a(n);
    cout << "Enter " << n << " integers separated by spaces/newlines:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];

    bool running = true;
    while (running) {
        cout << "\n---- Menu ----\n";
        cout << "1. Selection Sort\n";
        cout << "2. Merge Sort\n";
        cout << "3. Linear Search\n";
        cout << "4. Binary Search (array must be sorted)\n";
        cout << "5. Display array\n";
        cout << "6. Reset array (re-enter elements)\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        int choice;
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Try again.\n";
            continue;
        }

        switch (choice) {
            case 1:
                selectionSort(a);
                cout << "Array after Selection Sort: ";
                printArray(a);
                break;
            case 2:
                mergeSort(a, 0, (int)a.size() - 1);
                cout << "Array after Merge Sort: ";
                printArray(a);
                break;
            case 3: {
                cout << "Enter key to linear search: ";
                int key; cin >> key;
                int idx = linearSearch(a, key);
                if (idx == -1) cout << "Not found.\n";
                else cout << "Found at index " << idx << " (0-based).\n";
                break;
            }
            case 4: {
                if (!isSortedAsc(a)) {
                    cout << "Warning: array is not sorted ascending. Binary search requires a sorted array.\n";
                    cout << "Sort array first (choose 1 or 2) or continue anyway? (y/n): ";
                    char ch; cin >> ch;
                    if (ch != 'y' && ch != 'Y') break;
                }
                cout << "Enter key to binary search: ";
                int key; cin >> key;
                int idx = binarySearch(a, key);
                if (idx == -1) cout << "Not found.\n";
                else cout << "Found at index " << idx << " (0-based).\n";
                break;
            }
            case 5:
                cout << "Current array: ";
                printArray(a);
                break;
            case 6:
                cout << "Re-enter " << n << " integers:\n";
                for (int i = 0; i < n; ++i) cin >> a[i];
                break;
            case 0:
                running = false;
                cout << "Exiting.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
