#include <iostream>
using namespace std;

class publication {
protected:
    string title;
    float price;

public:
    void getdata() {
        cout << "Enter title and price: ";
        cin >> title >> price;
    }

    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class sales {
protected:
    float s[3];

public:
    void getdata() {
        cout << "Enter sales for 3 months: ";
        for(int i = 0; i < 3; i++)
            cin >> s[i];
    }

    void putdata() {
        cout << "Sales: ";
        for(int i = 0; i < 3; i++)
            cout << s[i] << " ";
        cout << endl;
    }
};

class book : public publication, public sales {
public:
    void getdata() {
        publication::getdata();
        sales::getdata();
    }

    void putdata() {
        publication::putdata();
        sales::putdata();
    }
};

int main() {
    book b;
    b.getdata();
    b.putdata();
    return 0;
}
