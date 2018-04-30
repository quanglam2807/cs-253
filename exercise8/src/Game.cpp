#include "Game.hpp"

Game::Game(string title, int rating) {
    // TODO: Initialize data members
    this->title = title;
    this->rating = rating;
}

ostream& operator<<(ostream& os, const Game& g) {
    // TODO: Send data members to the stream os
    os << "The rating of " << g.title << " is " << g.rating;
    return os;
}