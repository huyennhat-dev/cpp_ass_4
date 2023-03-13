#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int yearModel;
    std::string make;
    int speed;
public:
    Car(int yearModel, std::string make) {
        this->yearModel = yearModel;
        this->make = make;
        speed = 0;
    }

    int getYearModel() {
        return yearModel;
    }

    std::string getMake() {
        return make;
    }

    int getSpeed() {
        return speed;
    }

    void accelerate() {
        speed += 5;
    }

    void brake() {
        speed -= 5;
    }
};

int main() {
    Car myCar(2022, "Audi RS7");


    cout << "When the acceleration function is called: " << endl;
    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        cout << "Current speed: " << myCar.getSpeed() << "km/h" << endl;
    }

    cout << "When the brake function is called: " << endl;
    for (int i = 0; i < 5; i++) {
        myCar.brake();
        cout << "Current speed: " << myCar.getSpeed() << "km/h" << endl;
    }

    return 0;
}
