#include <iostream>
using namespace std;

class Shape {          // ABSTRACT CLASS
public:
    virtual void area() = 0;   // pure virtual function
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area = length * breadth" << endl;
    }
};

int main() {
    // Shape s;   ❌ ERROR (cannot create object)

    Shape* s;
    Rectangle r;

    s = &r;
    s->area();   // calls Rectangle's area

    return 0;
}
