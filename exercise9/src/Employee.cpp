#include "Employee.hpp"

// TODO: Implement member functions of the class Employee
Employee::Employee(string name, string department): name(name), department(department) {}

Employee::Employee(const Employee& another): 
    name(another.name), 
    department(another.department), 
    weeklyPayment(another.weeklyPayment) {}

string Employee::getName() const { return name; }
string Employee::getDepartment() const { return department; }
void Employee::setDepartment(string _department) { department = _department; }
double Employee::getWeeklyPayment() const { return weeklyPayment; }
void Employee::setWeeklyPayment(double _weeklyPayment) { weeklyPayment = _weeklyPayment; }

ostream& operator<<(ostream& os, const Employee& e) {
    // TODO: Send data members to the stream os
    os << e.name << " from " << e.department;
    return os;
}