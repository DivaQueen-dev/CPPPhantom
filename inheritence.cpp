 #include <iostream>
using namespace std;

// Parent class
class Parent {
public:
    Parent() // constructor of Parent
    {
        cout << "Constructor of Parent" << endl;
    }

    ~Parent() // destructor of Parent
    {
        cout << "Destructor of Parent" << endl;
    }
};

// Child1 class inherits from Parent
class Child1 : public Parent {
public:
    Child1() // constructor of Child1 (Parent constructor called first)
    {
        cout << "Constructor of Child1" << endl;
    }

    ~Child1() // destructor of Child1 (Parent destructor called afterward)
    {
        cout << "Destructor of Child1" << endl;
    }
};

// Child2 class inherits from Parent
class Child2 : public Parent {
public:
    Child2() // constructor of Child2 (Parent constructor called first)
    {
        cout << "Constructor of Child2" << endl;
    }

    ~Child2() // destructor of Child2 (Parent destructor called afterward)
    {
       


 cout << "Destructor of Child2" << endl;
    }
};

int main() {
    Child1 c1; 
    Child2 c2; 
    return 0;  
}

