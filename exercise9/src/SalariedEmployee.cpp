#include "SalariedEmployee.hpp"

// TODO: Implement member functions of the class SalariedEmployee
SalariedEmployee::SalariedEmployee(string name, string department, double salary): 
    Employee(name, department), 
    salary(salary) {
        setWeeklyPayment(salary / 52);
    }

SalariedEmployee::SalariedEmployee (const SalariedEmployee& se):
    Employee(se.getName(), se.getDepartment()),
    salary(se.salary) {
        setWeeklyPayment(se.salary / 52);
    }

double SalariedEmployee::getSalary() const { return salary; }
void SalariedEmployee::setSalary(double _salary) { 
    salary = _salary;
    setWeeklyPayment(salary / 52);
}

ostream& operator<<(ostream& os, const SalariedEmployee& se) {
    os << (const Employee&) se << " with the annual contract of $" << fixed << setprecision(2) << se.getSalary();
    return os;
}