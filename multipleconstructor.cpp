#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;
    char grade;

    // Constructors
    Student() {}

    Student(string n) {
        name = n;
    }

    Student(string n, int m) {
        name = n;
        marks = m;
    }

    Student(string n, int m, char g) {
        name = n;
        marks = m;
        grade = g;
    }

    Student(char g, int m, string n) {
        name = n;
        marks = m;
        grade = g;
    }
};

int main() {
    Student s1; // default constructor
    s1.name = "John";
    s1.marks = 85;
    s1.grade = 'A';

    Student s2("Pikku"); // string constructor
    s2.marks = 90;
    s2.grade = 'B';

    Student s3("Pikku", 90); // string + int
    s3.grade = 'B';

    Student s4("Atul", 95, 'A'); // string, int, char

    Student s5('C', 95, "Amit"); // char, int, string

    Student s6 = s1; // copy constructor (default)
    s6.name = "Vipin";

    Student s7(s2); // another copy
    s7.name = "Khushi";

    // Print all students
    cout << "Name: " << s1.name << ", Marks: " << s1.marks << ", Grade: " << s1.grade << endl;
    cout << "Name: " << s2.name << ", Marks: " << s2.marks << ", Grade: " << s2.grade << endl;
    cout << "Name: " << s3.name << ", Marks: " << s3.marks << ", Grade: " << s3.grade << endl;
    cout << "Name: " << s4.name << ", Marks: " << s4.marks << ", Grade: " << s4.grade << endl;
    cout << "Name: " << s5.name << ", Marks: " << s5.marks << ", Grade: " << s5.grade << endl;
    cout << "Name: " << s6.name << ", Marks: " << s6.marks << ", Grade: " << s6.grade << endl;
    cout << "Name: " << s7.name << ", Marks: " << s7.marks << ", Grade: " << s7.grade << endl;

    return 0;
}
