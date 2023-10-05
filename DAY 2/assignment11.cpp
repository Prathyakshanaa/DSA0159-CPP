#include <iostream>

int main() {
    int oldest_painting = 0; // Initialize to 0 years (assuming 0 represents unknown)

    int painting1 = 4200;
    int painting2 = 8500;
    int painting3 = 1000;
    int painting4 = 1300;

    if (painting1 > painting2 && painting1 > painting3 && painting1 > painting4) {
        oldest_painting = painting1;
    }
    else if (painting2 > painting1 && painting2 > painting3 && painting2 > painting4) {
        oldest_painting = painting2;
    }
    else if (painting3 > painting1 && painting3 > painting2 && painting3 > painting4) {
        oldest_painting = painting3;
    }
    else {
        oldest_painting = painting4;
    }

    std::cout << "The oldest cave painting is " << oldest_painting << " years old." << std::endl;

    return 0;
}

