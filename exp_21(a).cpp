// Siddhi Bajpai
// 24070123109
// B1
// User-defined Implementation of Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Performs binary search on a sorted vector
int binarySearch(const vector<int>& data, int key) {
    int start = 0;
    int end = data.size() - 1;

    while (start <= end) {
        int middle = start + (end - start) / 2;

        if (data[middle] == key) {
            return middle;
        } else if (data[middle] < key) {
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }

    return -1; // Key not found
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    vector<int> values(size);
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> values[i];
    }

    // Sort the array before binary search
    sort(values.begin(), values.end());

    cout << "Sorted Array: ";
    for (int value : values) {
        cout << value << " ";
    }
    cout << endl;

    int searchItem;
    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {
        cout << "Enter element to search: ";
        cin >> searchItem;

        int resultIndex = binarySearch(values, searchItem);
        if (resultIndex != -1) {
            cout << "Element " << searchItem << " found at index " << resultIndex << endl;
        } else {
            cout << "Element " << searchItem << " not found." << endl;
        }

        cout << "Do you want to search another element? (y/n): ";
        cin >> choice;
    }

    return 0;
}

//Output:
//Enter number of elements: 5
//Enter 5 elements:
//1 2 4 6 24
//Sorted Array: 1 2 4 6 24 
//Enter element to search: 2
//Element 2 found at index 1
//Do you want to search another element? (y/n): y
//Enter element to search: 4
//Element 4 found at index 2
//Do you want to search another element? (y/n): n
