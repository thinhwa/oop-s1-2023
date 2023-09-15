#include "Orchestra.h"

#include <iostream>

Orchestra::Orchestra() {
  size = 0;
  current_number_of_members = 0;
  members = nullptr;
};

Orchestra::Orchestra(int size) {
    this ->size = size;
    current_number_of_members = 0;
    members = new Musician [size];
}

Orchestra::~Orchestra () {
    delete [] members;
}

int Orchestra::get_current_number_of_members () {
    return current_number_of_members;
}

bool Orchestra::has_instrument(string instrument) {
    for (int i = 0; i < current_number_of_members; i++) {
        if (members[i].get_instrument() ==instrument){
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members () {
    return members;
}

bool Orchestra::add_musician (Musician new_musician){
    if (current_number_of_members < size){
        members [current_number_of_members] = new_musician;
        current_number_of_members++;
        return true;
    }
    return false;
}
