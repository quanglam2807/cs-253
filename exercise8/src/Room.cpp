#include "Room.hpp"

Room::Room(string building, int number) {
    // TODO: Initialize data members
    this->building = building;
    this->number = number;
}

ostream& operator<<(ostream& os, const Room& r) {
    // TODO: Send data members to the stream os
    os << r.building << " " << r.number;
    return os;
}