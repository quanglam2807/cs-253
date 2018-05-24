#include "exercise8.hpp"

#ifndef SONG_H
#define SONG_H

class Song {
    private:
        string title;
        string artist;
    public:
        Song(string, string);
        inline string getTitle() { return this->title;/* Return the title value */ }
        inline string getArtist() { return this->artist;/* Return the artist value */ }
        friend ostream& operator<<(ostream&, const Song&);
};


#endif
