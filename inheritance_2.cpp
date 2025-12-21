#include <iostream>
#include <cstring>
using namespace std;

const int SZ = 80;

class String {
protected:
    char str[SZ];
};

class Pstring : public String {
public:
    Pstring(const char s[]) {
        strncpy(str, s, SZ - 1);
        str[SZ - 1] = '\0';
    }

    void show() {
        cout << str << endl;
    }
};

int main() {
    Pstring s1("This is a safe string");
    Pstring s2("This string is too long and will be cut safely");

    s1.show();
    s2.show();

    return 0;
}
