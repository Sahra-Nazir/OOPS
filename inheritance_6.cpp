#include <iostream>
#include <cstdlib>
using namespace std;

class safearray {
protected:
    int arr[100];
};

class safehilo : public safearray {
    int low, high;

public:
    safehilo(int l, int h) {
        low = l;
        high = h;
    }

    int& operator[](int index) {
        if(index < low || index > high) {
            cout << "Index out of bounds!" << endl;
            exit(1);
        }
        return arr[index];
    }
};

int main() {
    safehilo a(0, 5);
    a[0] = 10;
    a[1] = 20;
    a[5] = 50;
    cout << a[1] << endl;
    cout << a[5] << endl;
    return 0;
}
