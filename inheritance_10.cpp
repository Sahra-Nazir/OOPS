#include <iostream>
using namespace std;

class manager {
protected:
    int id;

public:
    void getdata() {
        cout << "Enter manager ID: ";
        cin >> id;
    }
};

class executive : public manager {
    double bonus;
    int shares;

public:
    void getdata() {
        manager::getdata();
        cout << "Enter bonus: ";
        cin >> bonus;
        cout << "Enter shares: ";
        cin >> shares;
    }

    void putdata() {
        cout << "ID: " << id << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Shares: " << shares << endl;
    }
};

int main() {
    executive e;
    e.getdata();
    e.putdata();
    return 0;
}
