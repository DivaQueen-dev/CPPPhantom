#include <iostream>
using namespace std;
class Student {
private:
    // private data members (cannot be accessed directly outside the class)
    string name;
    int age;
    string branch;

public:
    // Function to set student details (with default arguments)
    void setDetails(string n, int a = 18, string b = "CSE") {
        name = n;
        age = a;
        branch = b;
    }

    // Function to display student details
    void display () {
        cout << "Name   : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Branch : " << branch << endl;
    }
};




int main () {
    Student s1, s2;

    // Using all values
    s1.setDetails("Ravi", 20, "ECE");
    cout << "Student 1 details:" << endl;
    s1.display();

    cout << endl;

    // Using default arguments (age=18, branch=CSE)
    s2.setDetails("Priya");
    cout << "Student 2 details:" << endl;
    s2.display();

    return 0;
}

