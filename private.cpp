#include<iostream>
using namespace std;

class Marks {
    public:
        int marks;
        char grade;

        void setName(string n) {
            name = n;
        }

        string getName() {
            return name;
        }

        void display() {
            cout << "Marks: " << marks << ", Grade: " << grade << ", Name: " << name << endl;
        }

    private:
        string name;
};

int main() {
    Marks m1;
    m1.setName("John");     // ✅ Using setter
    m1.marks = 90;
    m1.grade = 'A';

    m1.display();           // ✅ Safe access
    cout << "Name via getter: " << m1.getName() << endl; // ✅ Using getter

    return 0;
}
