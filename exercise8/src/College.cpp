#include "College.hpp"

College::College(string name, int rank) {
    // TODO: Initialize data members
    this->name = name;
    this->rank = rank;
}

ostream& operator<<(ostream& os, const College& c) {
    // TODO: Send data members to the stream os
    os << c.name << " is ranked #" << c.rank;
    return os;
}

void changeCollegeRank(College& college, int rank) {
    /* This function is fully implemented */
    college.setRank(rank);
}