#include <iostream>
using namespace std;

class Student {
public:
    virtual void calculateResult() {
        cout << "General Result\n";
    }
};

class Undergraduate : public Student {
public:
    void calculateResult() {
        cout << "Undergraduate Result: Pass/Fail\n";
    }
};

class Postgraduate : public Student {
public:
    void calculateResult() {
        cout << "Postgraduate Result: Grade Based\n";
    }
};

int main() {
    Student* s;
    Undergraduate u;
    Postgraduate p;

    s = &u; s->calculateResult();
    s = &p; s->calculateResult();
}
