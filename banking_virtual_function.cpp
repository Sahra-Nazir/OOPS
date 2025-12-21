#include <iostream>
using namespace std;

class BankAccount {
public:
    virtual float interest(float amt) { return 0; }
};

class SavingsAccount : public BankAccount {
public:
    float interest(float amt) { return amt * 0.04; }
};

class FixedDeposit : public BankAccount {
public:
    float interest(float amt) { return amt * 0.08; }
};

class RecurringDeposit : public BankAccount {
public:
    float interest(float amt) { return amt * 0.06; }
};

int main() {
    BankAccount* b;
    SavingsAccount s;
    FixedDeposit f;
    RecurringDeposit r;

    b = &s; cout << b->interest(10000) << endl;
    b = &f; cout << b->interest(10000) << endl;
    b = &r; cout << b->interest(10000) << endl;
}
