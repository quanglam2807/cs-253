#include "Bird.hpp"

// TODO: implement the class constructor
Bird::Bird(string name, int age, string habitat, int eggs):
    Animal(name, age, habitat),
    eggs(eggs) {}

ostream& operator<<(ostream& os, const Bird& b) {
    // TODO: implement the operator overload    
    os << (const Animal&) b << " " << b.eggs;
    return os;
}
