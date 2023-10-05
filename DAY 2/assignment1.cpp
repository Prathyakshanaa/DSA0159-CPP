#include <iostream>
using namespace std;
class PlasticTransaction {
private:
    double costPrice;
    double sellingPrice;
    double profit;
public:
    PlasticTransaction() {
        costPrice = 10.0;  
        sellingPrice = 12.0;  
        profit = sellingPrice - costPrice;
    }
    double getProfit() {
        return profit;
    }
};
int main() {
    PlasticTransaction transaction;
    double profit = transaction.getProfit();
    std::cout << "Kiran earns " << profit << " rupees by selling 1 kg of plastic.";
    return 0;
}

