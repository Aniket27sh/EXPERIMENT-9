#include <iostream>
using namespace std;

class vehicle {
public:
    void vehicle_Info() {
        cout << "Its class vehicle." << endl;
    }
};

class car : public vehicle {
public:
    void car_Info() {
        cout << "Its car class." << endl;
    }
};

class Electric_car : public car {
public:
    void Electric_car_Info() {
        cout << "Its Electric car class." << endl;
    }
};

int main() {
    Electric_car E;
    
    // Calling methods from the derived and base classes
    E.Electric_car_Info();
    E.car_Info();
    E.vehicle_Info();
    
    return 0;
}
