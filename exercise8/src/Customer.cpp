#include "Customer.hpp"

Customer::Customer(double loan, int term) {
    // TODO: Initialize data members
    this->loan = loan;
    this->term = term;
}

ostream& operator<<(ostream& os, const Customer& c) {
    // TODO: Send data members to the stream os
    os << "Loan: $" << fixed << setprecision(2) << c.loan << "; Term: " << c.term << " months";
    return os;
}
