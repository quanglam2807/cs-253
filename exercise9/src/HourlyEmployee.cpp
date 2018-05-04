#include "HourlyEmployee.hpp"

// TODO: Implement member functions of the class HourlyEmployee
HourlyEmployee::HourlyEmployee(string name, string department, double rate, double hours): 
    Employee(name, department), 
    rate(rate),
    hours(hours) {}

HourlyEmployee::HourlyEmployee (const HourlyEmployee& he): 
    Employee(he.getName(), he.getDepartment()),
    rate(he.rate),
    hours(he.hours) {}

double HourlyEmployee::getRate() const { return rate; }
void HourlyEmployee::setRate(double _rate) { rate = _rate; }
double HourlyEmployee::getHours() const { return hours; };
void HourlyEmployee::setHours(double _hours) { hours = _hours; }

ostream& operator<<(ostream& os, const HourlyEmployee& he) {
    os << (const Employee&) he << " earned $" << fixed << setprecision(2) << he.getRate()*he.getHours() << " this week after working " << fixed << setprecision(2) << he.getHours() << " hours";
    return os;
}