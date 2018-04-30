#include "Company.hpp"

Company::Company(string name, double stockPrice) {
    // TODO: Initialize data members
    this->name = name;
    this->stockPrice = stockPrice;
}

ostream& operator<<(ostream& os, const Company& c) {
    // TODO: Send data members to the stream os
    os << c.name << "'s stock price is $" << fixed << setprecision(2) << c.stockPrice;
    return os;
}
