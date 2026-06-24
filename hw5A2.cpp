#include <iostream>
#include <string>

using namespace std;

int daysToFund(int startBalance, int dailyDeposit);

int main() {

    int starting;
    int daily;

    cout << "Enter the starting Vault balance: ";
    cin >> starting;

    cout << "Enter the daily deposit amount: ";
    cin >> daily;

    cout << "--- Vault Savings Plan ---" << endl;

    int days = daysToFund(starting, daily);

    cout << "The Vault was funded in " << days << " days!" << endl;

    return 0;
}

int daysToFund(int startBalance, int dailyDeposit) {
    int days = 0;

    while (startBalance < 42500) {
        days++;
        startBalance += dailyDeposit;
        cout << "Day " << days << ": deposited " << dailyDeposit << ", balance now " << startBalance << endl;
    }
    return days;
}