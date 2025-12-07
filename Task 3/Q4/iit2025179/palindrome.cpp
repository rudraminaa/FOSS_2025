#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int i, j;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> s;

    i = 0;
    j = s.length() - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        cout << "The string is a palindrome";
    } else {
        cout << "The string is not a palindrome";
    }

    return 0;
}

