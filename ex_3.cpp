#include <iostream>
#include <string>

using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;
public:
    RetailItem(string desc, int units, double p) {
        description = desc;
        unitsOnHand = units;
        price = p;
    }
    void setDescription(string desc) {
        description = desc;
    }
    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }
    void setPrice(double p) {
        price = p;
    }
    string getDescription() {
        return description;
    }
    int getUnitsOnHand() {
        return unitsOnHand;
    }
    double getPrice() {
        return price;
    }
};

int main() {
    RetailItem item1("Shirt", 10, 19.99);
    RetailItem item2("Pants", 5, 29.99);
    RetailItem item3("Shoes", 8, 49.99);
    
    cout << "Item 1: " << item1.getDescription() << " - Units: " << item1.getUnitsOnHand() << " - Price: $" << item1.getPrice() << endl;
    cout << "Item 2: " << item2.getDescription() << " - Units: " << item2.getUnitsOnHand() << " - Price: $" << item2.getPrice() << endl;
    cout << "Item 3: " << item3.getDescription() << " - Units: " << item3.getUnitsOnHand() << " - Price: $" << item3.getPrice() << endl;

    return 0;
}
