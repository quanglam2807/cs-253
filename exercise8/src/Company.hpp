#include "exercise8.hpp"

#ifndef COMPANY_H
#define COMPANY_H

class Company {
    private:
        string name;
        double stockPrice;
    public:
        Company(string, double);
        inline double getStockPrice() { return this->stockPrice;/* Return the stock price value */ }
        inline void setStockPrice(double stockPrice) { this->stockPrice = stockPrice;/* Update the stock price value */ }
        friend ostream& operator<<(ostream&, const Company&);
};

#endif
