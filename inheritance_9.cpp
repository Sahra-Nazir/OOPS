#include <iostream>
using namespace std;

class date {
    int d, m, y;

public:
    void getdata() {
        cout << "Enter day month year: ";
        cin >> d >> m >> y;
    }

    void putdata() {
        cout << d << "/" << m << "/" << y << endl;
    }
};

class publication2 {
protected:
    date pubdate;

public:
    void getdata() {
        pubdate.getdata();
    }

    void putdata() {
        pubdate.putdata();
    }
};

class book : public publication2 {
};

int main() {
    book b;
    b.getdata();
    b.putdata();
    return 0;
}
