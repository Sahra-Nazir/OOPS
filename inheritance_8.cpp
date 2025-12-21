#include <iostream>
#include <cstring>
using namespace std;

class Pstring2 {
    char str[80];

public:
    void left(const char s[], int n) {
        strncpy(str, s, n);
        str[n] = '\0';
    }

    void mid(const char s[], int start, int n) {
        strncpy(str, s + start, n);
        str[n] = '\0';
    }

    void right(const char s[], int n) {
        int len = strlen(s);
        strncpy(str, s + len - n, n);
        str[n] = '\0';
    }

    void show() {
        cout << str << endl;
    }
};

int main() {
    Pstring2 p;
    p.left("HELLOWORLD", 5);
    p.show();
    p.mid("HELLOWORLD", 3, 4);
    p.show();
    p.right("HELLOWORLD", 5);
    p.show();
    return 0;
}
