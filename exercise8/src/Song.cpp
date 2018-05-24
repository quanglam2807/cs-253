#include "Song.hpp"

Song::Song(string title, string artist) {
    // TODO: Initialize data members
    this->title = title;
    this->artist = artist;
}

ostream& operator<<(ostream& os, const Song& s) {
    // TODO: Send data members to the stream os
    os << s.title << " by " << s.artist;
    return os;
}

