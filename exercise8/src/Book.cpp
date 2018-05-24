#include "Book.hpp"

Book::Book(string title, string author, double price) {
    // TODO: Initialize data members
    this->title = title;
    this->author = author;
    this->price = price; 
}

ostream& operator<<(ostream& os, const Book& b) {
    // TODO: Send data members to the stream os
    os << b.title << " by " << b.author << " costs $" << b.price;
    return os;
}