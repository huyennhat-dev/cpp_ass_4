#include <iostream>

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
    
public:
    Inventory() : itemNumber(0), quantity(0), cost(0.0), totalCost(0.0) {}
    
    Inventory(int itemNumber, double cost, int quantity) : itemNumber(itemNumber), cost(cost), quantity(quantity) {
        setTotalCost();
    }
    
    void setItemNumber(int itemNumber) {
        this->itemNumber = itemNumber;
    }
    
    void setQuantity(int quantity) {
        this->quantity = quantity;
        setTotalCost();
    }
    
    void setCost(double cost) {
        this->cost = cost;
        setTotalCost();
    }
    
    void setTotalCost() {
        this->totalCost = quantity * cost;
    }
    
    int getItemNumber() const {
        return itemNumber;
    }
    
    int getQuantity() const {
        return quantity;
    }
    
    double getCost() const {
        return cost;
    }
    
    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    Inventory item1(123, 10.99, 50);
    std::cout << "Item Number: " << item1.getItemNumber() << std::endl;
    std::cout << "Quantity: " << item1.getQuantity() << std::endl;
    std::cout << "Cost: $" << item1.getCost() << std::endl;
    std::cout << "Total Cost: $" << item1.getTotalCost() << std::endl;
    
    std::cout << std::endl;
    
    item1.setQuantity(100);
    std::cout << "Item Number: " << item1.getItemNumber() << std::endl;
    std::cout << "Quantity: " << item1.getQuantity() << std::endl;
    std::cout << "Cost: $" << item1.getCost() << std::endl;
    std::cout << "Total Cost: $" << item1.getTotalCost() << std::endl;
    
    return 0;
}
