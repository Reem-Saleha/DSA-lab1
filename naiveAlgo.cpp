#include <iostream>
#include <string>
using namespace std;

// Function to find first occurrence of sub in main string
int search(string String, string subStr) {
    int a = String.size();
    int b = subStr.size();

    // If subString is empty, return 0
    if (b == 0) {
        return 0;
    }

    //loop for starting position
    for (int i = 0; i <= a - b; i++) {
        bool match = true;

    // Compare characters
    for (int j = 0; j < b; j++) {
        if (String[i + j] != subStr[j]) {
            match = false;
            break;
        }
    }
    //if found
        if (match == true) {
            return i;
        }
    }
     // if not found
    return -1;
}

int main() {
    cout << search("abcde", "abc") << endl;  // beginning
    cout << search("abcde", "de") << endl;   // end
    cout << search("abcde", "fg") << endl;   // not present
    cout << search("abcde", "") << endl;     // empty
}