
#include <iostream>
using namespace std;

int main() {
    float amount, rate, years;
    float interest, total, emi;

    cout << "==== SIMPLE LOAN EMI CALCULATOR ====\n";

    // Input values
    cout << "Enter Loan Amount: ";
    cin >> amount;

    cout << "Enter Annual Interest Rate (in %): ";
    cin >> rate;

    cout << "Enter Loan Duration (in years): ";
    cin >> years;

    // Simple interest calculation (approximate EMI)
    interest = (amount * rate * years) / 100;
    total = amount + interest;
    emi = total / (years * 12);

    // Output results
    cout << "\nTotal Interest: Rs. " << interest << endl;
    cout << "Total Payment (Principal + Interest): Rs. " << total << endl;
    cout << "Approx Monthly EMI: Rs. " << emi << endl;

    return 0;
}
