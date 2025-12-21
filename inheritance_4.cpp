#include <iostream>
using namespace std;

class publication {
protected:
    string title;

public:
    void getdata() {
        cout << "Enter title: ";
        cin >> title;
    }

    void putdata() {
        cout << "Title: " << title << endl;
    }
};

class disk : public publication {
    enum dtype { CD, DVD };
    dtype type;

public:
    void getdata() {
        publication::getdata();
        char ch;
        cout << "Enter c for CD or d for DVD: ";
        cin >> ch;
        type = (ch == 'c') ? CD : DVD;
    }

    void putdata() {
        publication::putdata();
        cout << "Disk Type: " << (type == CD ? "CD" : "DVD") << endl;
    }
};

int main() {
    disk d;
    d.getdata();
    d.putdata();
    return 0;
}
