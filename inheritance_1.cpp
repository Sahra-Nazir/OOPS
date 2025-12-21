#include <iostream>
using namespace std;

class publication {
protected:
    string title;
    float price;

public:
    void getdata() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class book : public publication {
    int pages;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter pages: ";
        cin >> pages;
    }

    void putdata() {
        publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class tape : public publication {
    float time;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time: ";
        cin >> time;
    }

    void putdata() {
        publication::putdata();
        cout << "Playing Time: " << time << endl;
    }
};

int main() {
    book b;
    tape t;

    cout << "\nBook Details\n";
    b.getdata();
    b.putdata();

    cout << "\nTape Details\n";
    t.getdata();
    t.putdata();

    return 0;
}
