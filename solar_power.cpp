#include <iostream>
using namespace std;

int main() {
    float panelPower, sunlightHours;
    float dailyEnergy, monthlyEnergy, yearlyEnergy;

    cout << "==== SOLAR POWER OUTPUT TRACKER ====\n";

    // Input panel rating and sunlight hours
    cout << "Enter Solar Panel Power (in Watts, e.g., 300): ";
    cin >> panelPower;

    cout << "Enter Average Sunlight Hours per Day: ";
    cin >> sunlightHours;

    // Energy calculations
    dailyEnergy = (panelPower * sunlightHours) / 1000; // kWh
    monthlyEnergy = dailyEnergy * 30;
    yearlyEnergy = dailyEnergy * 365;

    // Output
    cout << "\nEstimated Energy Production:\n";
    cout << "Daily Output: " << dailyEnergy << " kWh\n";
    cout << "Monthly Output: " << monthlyEnergy << " kWh\n";
    cout << "Yearly Output: " << yearlyEnergy << " kWh\n";

    return 0;
}
