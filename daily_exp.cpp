#include <iostream>
using namespace std;

int main() {
    string name[100];     // Store item names
    float amount[100];    // Store expense amount
    int count = 0;        // Number of expenses

    int choice;

    cout << "==== DAILY EXPENSE TRACKER ====\n";

    do {
        cout << "\n1. Add Expense";
        cout << "\n2. View All Expenses";
        cout << "\n3. View Total Expense";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count >= 100) {
                cout << "Expense limit reached!";
                continue;
            }

            cout << "Enter Item Name: ";
            cin >> name[count];

            cout << "Enter Amount: ";
            cin >> amount[count];

            cout << "Expense Added Successfully!\n";
            count++;
        }

        else if (choice == 2) {
            cout << "\n--- List of Expenses ---\n";
            for (int i = 0; i < count; i++) {
                cout << i+1 << ". " << name[i] 
                     << " - Rs. " << amount[i] << endl;
            }
        }

        else if (choice == 3) {
            float total = 0;
            for (int i = 0; i < count; i++) {
                total += amount[i];
            }
            cout << "\nTotal Expense = Rs. " << total << endl;
        }

        else if (choice == 4) {
            cout << "Exiting... Thank You!\n";
        }

        else {
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}
