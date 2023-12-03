#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout<<"Enter the number of ceo: "<<endl;
    cin >> n; // Number of CEOs

    vector<int> preferences(n);
    cout<<"ENter the preferences: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> preferences[i]; // Input the preferences
    }

    vector<int> seatingArrangement(n);
    for (int i = 0; i < n; i++) {
        seatingArrangement[preferences[i] - 1] = i + 1; // Arrange CEOs around the table
    }

    for (int i = 0; i < n; i++) {
        cout << seatingArrangement[i];
        if (i < n - 1) {
            cout << "-";
        }
    }

}
