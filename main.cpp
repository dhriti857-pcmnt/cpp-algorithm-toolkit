
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Linear Search: O(n)
int linearSearch(vector<int> arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

// Binary Search: O(log n)
// Array must be sorted.
int binarySearch(vector<int> arr, int key) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

// Bubble Sort: O(n^2) average/worst case
void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

// Selection Sort: O(n^2)
void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[i], arr[minIndex]);
    }
}

void display(vector<int> arr) {
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size.\n";
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;

    do {
        cout << "\n--- C++ Algorithm Toolkit ---\n";
        cout << "1. Linear Search\n";
        cout << "2. Binary Search\n";
        cout << "3. Bubble Sort\n";
        cout << "4. Selection Sort\n";
        cout << "5. Display Array\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        int key, result;
        vector<int> temp;

        switch (choice) {
            case 1:
                cout << "Enter element to find: ";
                cin >> key;
                result = linearSearch(arr, key);

                if (result == -1)
                    cout << "Element not found.\n";
                else
                    cout << "Found at index " << result << ".\n";
                break;

            case 2:
                temp = arr;
                sort(temp.begin(), temp.end());

                cout << "Sorted array: ";
                display(temp);

                cout << "Enter element to find: ";
                cin >> key;
                result = binarySearch(temp, key);

                if (result == -1)
                    cout << "Element not found.\n";
                else
                    cout << "Found at sorted index "
                         << result << ".\n";
                break;

            case 3:
                bubbleSort(arr);
                cout << "Sorted using Bubble Sort: ";
                display(arr);
                break;

            case 4:
                selectionSort(arr);
                cout << "Sorted using Selection Sort: ";
                display(arr);
                break;

            case 5:
                display(arr);
                break;

            case 0:
                cout << "Exiting toolkit.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}
