#include "exercise8.hpp"

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
    private:
        double loan;
        int term;
    public:
        Customer(double,int);
        inline double getLoan() { return this->loan; }
        inline int getTerm() { return this->term; }
        friend ostream& operator<<(ostream&, const Customer&);
};

#endif
