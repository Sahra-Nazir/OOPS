#include <iostream>
using namespace std;

class Student {
private:
    int marks;   // private data

public:
    Student(int m) {
        marks = m;
    }

    // friend function declaration
    friend void showMarks(Student s);
};

// friend function definition
void showMarks(Student s) {
    // can access private data
    cout << "Marks = " << s.marks << endl;
}

int main() {
    Student s1(85);

    // calling friend function
    showMarks(s1);

    return 0;
}
