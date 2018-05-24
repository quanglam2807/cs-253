#include "Laptop.hpp"

Laptop::Laptop(string manufacturer, double price, string color) {
    // TODO: Initialize data members
    this->manufacturer = manufacturer;
    this->price = price;
    this->color = color;
}

ostream& operator<<(ostream& os, const Laptop& l) {
    // TODO: Send data members to the stream os
    os << l.color << " laptop by " << l.manufacturer << " costs $" << fixed << setprecision(2) << l.price;
    return os;
}

