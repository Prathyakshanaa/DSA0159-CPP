#include<iostream>
using namespace std;

class Calc {
public:
    int children;
    int buses;

    // Constructor to initialize children and buses
    Calc(int c, int b) : children(c), buses(b) {}

    // A method to calculate and display the total
    void mymethod() {
        cout << "Total children: " << children * buses << endl;
    }
};

int main() {
    // Create an object of the Calc class and initialize it with values
    Calc number(48, 3);
    
    // Call the method to calculate and display the total
    number.mymethod();

    return 0;
}

