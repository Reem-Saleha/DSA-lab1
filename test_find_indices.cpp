#include <iostream>
#include "find_indices.h"
using namespace std;

int main() {
    // Multiple occurrences
    vector<int> arr1 = {1, 3, 7, 3, 5, 3};
    int key1 = 3;
    vector<int> ans1 = findAllIndices(arr1, key1);
    cout << "Indices of " << key1 << ": ";
    for (int i : ans1)
        cout << i << " ";
    cout << endl;

    // Key not present
    vector<int> arr2 = {2, 4, 6, 8};
    int key2 = 5;
    vector<int> ans2 = findAllIndices(arr2, key2);
    cout << "Indices of " << key2 << ": ";
    if (ans2.empty())
    cout << "Not found";
    else for (int i : ans2)
    cout << i << " ";
        cout << endl;

    //  Empty array
    vector<int> arr3 = {};
    int key3 = 10;
    vector<int> ans3 = findAllIndices(arr3, key3);
    cout << "Indices of " << key3 << ": ";
    if (ans3.empty())
    cout << "Array is empty";
    else for (int i: ans3)
    cout << i << " ";
        cout << endl;

    return 0;
}
