#include <iostream>
using namespace std;

class Notification {
public:
    virtual void send() {
        cout << "Sending Notification\n";
    }
};

class EmailNotification : public Notification {
public:
    void send() { cout << "Email Sent\n"; }
};

class SMSNotification : public Notification {
public:
    void send() { cout << "SMS Sent\n"; }
};

class AppNotification : public Notification {
public:
    void send() { cout << "App Notification Sent\n"; }
};

int main() {
    Notification* n;
    EmailNotification e;
    SMSNotification s;
    AppNotification a;

    n = &e; n->send();
    n = &s; n->send();
    n = &a; n->send();
}
