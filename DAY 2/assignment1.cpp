#include <iostream>

class PlasticTransaction {
private:
    double costPrice;
    double sellingPrice;
    double profit;

public:
    // Default constructor
    PlasticTransaction() {
        costPrice = 10.0;  // Cost price of 1 kg plastic
        sellingPrice = 12.0;  // Selling price of 1 kg plastic
        profit = sellingPrice - costPrice;
    }

    double getProfit() {
        return profit;
    }
};

int main() {
    // Create an instance of the PlasticTransaction class
    PlasticTransaction transaction;

    // Calculate and display the profit
    double profit = transaction.getProfit();
    std::cout << "Kiran earns " << profit << " rupees by selling 1 kg of plastic." << std::endl;

    return 0;
}

