#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[10];      // stores up to 10 patient names
    int front = 0, rear = 0, served = 0;
    int choice;

    cout << "=== HOSPITAL PATIENT QUEUE SYSTEM ===" << endl;

    while (true) {
        cout << "\n1. Add Patient  2. Call Next  3. Show Queue  4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {   // Add patient
            if (rear == 10)
                cout << "⚠ Queue is full! Cannot add more patients.\n";
            else {
                cout << "Enter patient name: ";
                cin >> names[rear];
                rear++;
                cout << "✅ Patient added to the queue.\n";
            }
        }

        else if (choice == 2) {  // Call next patient
            if (front == rear)
                cout << "⚠ No patients waiting!\n";
            else {
                cout << "🚑 Next patient: " << names[front] << endl;
                front++; served++;
                if (front == rear) front = rear = 0;  // reset queue if empty
            }
        }

        else if (choice == 3) {  // Show queue
            if (front == rear)
                cout << "No patients in queue.\n";
            else {
                cout << "🩺 Current Waiting List:\n";
                for (int i = front; i < rear; i++)
                    cout << i - front + 1 << ". " << names[i] << endl;
            }
            cout << "Total patients served: " << served << endl;
        }

        else if (choice == 4) {  // Exit
            cout << "🏥 Clinic closed. Total patients served: " << served << endl;
            break;
        }

        else
            cout << "Invalid choice! Try again.\n";
    }

    return 0;
}
