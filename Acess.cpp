#include <iostream>
using namespace std;
// Class to demonstrate function overloading
class sample {
public:
    // Function to add two integers
    void sum (int a, int b) {
        cout << "Sum of two integer numbers = " << a + b << endl;
    }

    // Function to add two float values
    void sum(float a, float b) {
        cout << "Sum of two float numbers = " << a + b << endl;
    }

    // Function to concatenate two strings
    void sum(string a, string b) {
        cout << "Sum of two strings = " << a + b << endl;
    }

    // Function to add two double values
    void sum(double a, double b) {
        cout << "Sum of two double numbers = " << a + b << endl;
    }
};



int main() {
    sample s;   // Create object of class sample

    s.sum(10, 20);             // Calls integer version
    s.sum(3.7329, 5.23932);    // Calls double version
    s.sum(2.5f, 3.6f);         // Calls float version
    s.sum("1", "2");           // Calls string version (concatenation)

    return 0;
}

