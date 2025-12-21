#include <iostream>
using namespace std;

class Employee {
public:
    virtual float calculateSalary() { return 0; }
};

class FullTimeEmployee : public Employee {
public:
    float calculateSalary() { return 50000; }
};

class PartTimeEmployee : public Employee {
public:
    float calculateSalary() { return 20000; }
};

class Intern : public Employee {
public:
    float calculateSalary() { return 10000; }
};

int main() {
    Employee* e;
    FullTimeEmployee f;
    PartTimeEmployee p;
    Intern i;

    e = &f; cout << e->calculateSalary() << endl;
    e = &p; cout << e->calculateSalary() << endl;
    e = &i; cout << e->calculateSalary() << endl;
}
