#include <iostream>

class Plastic {
public:
    Plastic() {
        costPrice = 10.0;
        sellingPrice = 12.0;
    }

    double calculateProfit() {
        return sellingPrice - costPrice;
    }

private:
    double costPrice;
    double sellingPrice;
};

int main() {
    Plastic kiranPlastic;
    double profit = kiranPlastic.calculateProfit();

    std::cout << "Kiran made $" << profit << " on selling 1 kg of plastic." << std::endl;

    return 0;
}
