#include <iostream>
#include <string>

using namespace std;

int totalGold(int donations[], int size);

int main() {

    int size;
    int donations[100];

    cout << "Enter the number of gold donations: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << "Enter gold donation " << (i + 1) << ": ";
        cin >> donations[i];
    }

    cout << "--- Vault Funding ---" << endl;

    int total = totalGold(donations, size);
    int goal = 42500;

    cout << "Total gold donated: " << total << endl;
    cout << "Vault goal: " << goal << endl;

    if (total >= goal) {
        cout << "The Vault is fully funded! Surplus: " << (total - goal) << " gold" << endl;
    } else {
        cout << "The Vault still needs " << (goal - total) << " more gold." << endl;
    }

    return 0;
}

int totalGold(int donations[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += donations[i];
    }
    return total;
}