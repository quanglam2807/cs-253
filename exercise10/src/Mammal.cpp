#include "Mammal.hpp"

// TODO: implement the class constructor
// TODO: implement the class constructor
Mammal::Mammal(string name, int age, string habitat, bool carnivore):
    Animal(name, age, habitat),
    carnivore(carnivore) {}

string Mammal::move() const {
    return "runs";
}

ostream& operator<<(ostream& os, const Mammal& m) {
    // TODO: implement the operator overload
    os << (const Animal&) m;
    if (m.isCarnivore()) {
        os << " eats meat";
    } else {
        os << " eats grass";
    }
    return os;
}
