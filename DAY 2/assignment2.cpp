#include<iostream>
using namespace std;

class Calc {
public:
    int children;
    int buses;
    Calc(int c, int b) : children(c), buses(b) {}
    void mymethod() {
        cout << "Total children: " << children * buses << endl;
    }
};
int main() {
    Calc number(48, 3);
    number.mymethod();
    return 0;
}

