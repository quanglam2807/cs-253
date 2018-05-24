#include "Employee.hpp"

Employee::Employee(string firstName, string lastName, double salary, bool isFullTime) {
    // TODO: Initialize data members
    this->firstName = firstName;
    this->lastName = lastName;
    this->salary = salary;
    this->isFullTime = isFullTime;
}

ostream& operator<<(ostream& os, const Employee& e) {
    // TODO: Send data members to the stream os
    os << e.firstName << " " << e.lastName << " earns $" << fixed << setprecision(2) << e.salary;
    os << " and works ";
    if (e.isFullTime) {
        os << "full-time";
    } else {
        os << "part-time";
    }
    return os;
}
