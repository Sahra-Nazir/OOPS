#include <iostream>
using namespace std;

class counter {
protected:
    int count;

public:
    counter() {
        count = 0;
    }

    void operator++() {
        ++count;
    }

    int getcount() {
        return count;
    }
};

class counter2 : public counter {
public:
    void operator++(int) {
        count++;
    }
};

int main() {
    counter2 c;
    ++c;
    c++;
    c++;
    cout << "Count = " << c.getcount() << endl;
    return 0;
}
