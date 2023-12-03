#include<bits/stdc++.h>
using namespace std;

void camel(string s) {
    for (int i = 0; i < s.length(); ++i) {
        // Check if the current character is uppercase
        if (isupper(s[i])) {
            // If not the first character, print a new line
            if (i != 0) {
                cout << endl;
            }
            // Convert to lowercase and print
            cout << (char)tolower(s[i]);
        } 
        else {
            // Convert to uppercase and print
            cout << (char)toupper(s[i]);
        }
    }
}

int main() {
    string s;  
    cin >> s;
    camel(s);
    return 0;
}