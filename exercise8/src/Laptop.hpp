#include "exercise8.hpp"

#ifndef LAPTOP_H
#define LAPTOP_H

class Laptop {
    private:
        string manufacturer;
        double price;
        string color;
    public:
        Laptop(string, double, string);
        inline string getManufacturer() { return this->manufacturer;/* Return the manufacturer value */ }
        inline void setManufacturer(string manufacturer) { this->manufacturer = manufacturer;/* Update the manufacturer value */ }
        inline double getPrice() { return this->price;/* Return the price value */ }
        inline void setPrice(double price) { this->price = price;/* Update the price value */ }
        inline string getColor() { return this->color;/* Return the color value */ }
        inline void setColor(string color) { this->color = color;/* Update the color value */ }
        friend ostream& operator<<(ostream&, const Laptop&);
};


#endif
