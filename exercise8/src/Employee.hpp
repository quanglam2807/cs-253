#include "exercise8.hpp"

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
    private:
        string firstName;
        string lastName;
        double salary;
        bool isFullTime;
    public:
        Employee(string, string, double, bool);
        friend ostream& operator<<(ostream&, const Employee&);
};

#endif
