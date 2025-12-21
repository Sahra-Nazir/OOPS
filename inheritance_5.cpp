#include <iostream>
using namespace std;

class employee {
protected:
    int id;

public:
    void getdata() {
        cout << "Enter employee ID: ";
        cin >> id;
    }
};

class employee2 : public employee {
    double compensation;
    enum period { HOURLY, WEEKLY, MONTHLY };
    period pay;

public:
    void getdata() {
        employee::getdata();
        cout << "Enter compensation: ";
        cin >> compensation;
        int p;
        cout << "Enter pay period (0=Hourly,1=Weekly,2=Monthly): ";
        cin >> p;
        pay = (period)p;
    }

    void putdata() {
        cout << "ID: " << id << endl;
        cout << "Compensation: " << compensation << endl;
        cout << "Pay Period: ";
        if(pay == HOURLY) cout << "Hourly";
        else if(pay == WEEKLY) cout << "Weekly";
        else cout << "Monthly";
        cout << endl;
    }
};

int main() {
    employee2 e;
    e.getdata();
    e.putdata();
    return 0;
}
