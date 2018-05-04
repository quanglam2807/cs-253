#include "SalariedEmployee.hpp"

// TODO: Implement member functions of the class SalariedEmployee
SalariedEmployee::SalariedEmployee(string name, string department, double salary): 
    Employee(name, department), 
    salary(salary) {}

SalariedEmployee::SalariedEmployee (const SalariedEmployee& se):
    Employee(se.getName(), se.getDepartment()),
    salary(se.salary) {}

double SalariedEmployee::getSalary() const { return salary; }
void SalariedEmployee::setSalary(double _salary) { salary = _salary; }

ostream& operator<<(ostream& os, const SalariedEmployee& se) {
    os << (const Employee&) se << " earned $" << fixed << setprecision(2) << se.getSalary()/52 << " this week with the annual contract of $" << fixed << setprecision(2) << se.getSalary();
    return os;
}