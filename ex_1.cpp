#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee(string name, int idNumber, string department, string position) {
        this->name = name;
        this->idNumber = idNumber;
        this->department = department;
        this->position = position;
    }

    Employee(string name, int idNumber) {
        this->name = name;
        this->idNumber = idNumber;
        this->department = "";
        this->position = "";
    }

    Employee() {
        this->name = "";
        this->idNumber = 0;
        this->department = "";
        this->position = "";
    }

    void setName(string name) {
        this->name = name;
    }

    void setIdNumber(int idNumber) {
        this->idNumber = idNumber;
    }

    void setDepartment(string department) {
        this->department = department;
    }

    void setPosition(string position) {
        this->position = position;
    }

    string getName(){
        return name;
    }

    int getIdNumber(){
        return idNumber;
    }

    string getDepartment(){
        return department;
    }

    string getPosition(){
        return position;
    }
};

int main() {
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    cout << "Employee 1\n";
    cout << "Name: " << emp1.getName() << endl;
    cout << "ID number: " << emp1.getIdNumber() << endl;
    cout << "Department: " << emp1.getDepartment() << endl;
    cout << "Position: " << emp1.getPosition() << endl;

    cout << "\nEmployee 2\n";
    cout << "Name: " << emp2.getName() << endl;
    cout << "ID number: " << emp2.getIdNumber() << endl;
    cout << "Department: " << emp2.getDepartment() << endl;
    cout << "Position: " << emp2.getPosition() << endl;

    cout << "\nEmployee 3\n";
    cout << "Name: " << emp3.getName() << endl;
    cout << "ID number: " << emp3.getIdNumber() << endl;
    cout << "Department: " << emp3.getDepartment() << endl;
    cout << "Position: " << emp3.getPosition() << endl;

    return 0;
}
