#include "Student.hpp"

Student::Student(string name, string major, double gpa) {
    // TODO: Initialize data members
    this->name = name;
    this->major = major;
    this->gpa = gpa;
}

ostream& operator<<(ostream& os, const Student& s) {
    // TODO: Send data members to the stream os
    os << s.name << " (" << fixed << setprecision(2) << s.gpa << ") majors in " << s.major;
    return os;
}