#include <iostream>
using namespace std;

int main() {
    float buyPrice, sellPrice, shares;
    float totalBuy, totalSell, profitLoss, percent;

    cout << "==== STOCK MARKET PROFIT / LOSS CALCULATOR ====\n";

    // Input values
    cout << "Enter Buying Price per Share: ";
    cin >> buyPrice;

    cout << "Enter Selling Price per Share: ";
    cin >> sellPrice;

    cout << "Enter Number of Shares: ";
    cin >> shares;

    // Total investment and returns
    totalBuy = buyPrice * shares;
    totalSell = sellPrice * shares;

    // Profit or Loss
    profitLoss = totalSell - totalBuy;

    // Percentage
    percent = (profitLoss / totalBuy) * 100;

    // Output
    if (profitLoss > 0) {
        cout << "\n📈 Profit: Rs. " << profitLoss << endl;
        cout << "Profit Percentage: " << percent << " %\n";
    }
    else if (profitLoss < 0) {
        cout << "\n📉 Loss: Rs. " << -profitLoss << endl;  // negative value converted to positive
        cout << "Loss Percentage: " << -percent << " %\n";
    }
    else {
        cout << "\nNo Profit, No Loss.\n";
    }

    return 0;
}
