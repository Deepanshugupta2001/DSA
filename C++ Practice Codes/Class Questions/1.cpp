#include<iostream>
#include<cstring>
using namespace std;

bool palindrome(char a[]) {
    int i = 0, j = strlen(a) - 1;
    while (i < j) {
        if (a[i] != a[j]) {
            return false;  // Directly return false on mismatch
        }
        i++;
        j--;
    }
    return true;  // Return true if the string is a palindrome
}

int main() {
    char a[100];
    cin >> a;  // Input the string directly

    if (palindrome(a)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}


