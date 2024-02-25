#include <iostream>
#include <string>

#include "Song.h"

using namespace std;

Song::Song() : title(""), artist("") {
}
Song::Song (const string title,const string artist) {
        this->title = title;
        this->artist = artist;
    }
Song::~Song() {}
string Song::getTitle() const {
        return title;
    }
string Song::getArtist() const {
    return artist;
    }
void Song::setTitle(const string title) {
        this->title = title;
    }
void Song::setArtist(const string artist) {
        this->artist = artist;
    }