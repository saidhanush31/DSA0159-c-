#include <iostream>

class Bus {
private:
    int capacity;

public:
    Bus(int capacity) {
        this->capacity = capacity;
    }

    int calculateChildren(int numberOfBuses) {
        return capacity * numberOfBuses;
    }
};

int main() {
    int busCapacity = 48;
    int numberOfBuses = 3;

    Bus bus(busCapacity);

    int totalChildren = bus.calculateChildren(numberOfBuses);

    std::cout << "Three buses, each carrying " << busCapacity << " children, can carry a total of " << totalChildren << " children." << std::endl;

    return 0;
}
