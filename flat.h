//
// Created by mai on 11.05.22.
//

#ifndef FLAT_FLAT_H
#define FLAT_FLAT_H

#include <vector>
#include <list>
#include "room.h"

class Flat {
private:
    std::vector<Room> rooms;
public:
    Flat() = default;
    ~Flat() = default;
    Flat(const Flat&) = default;
    Flat(Flat&&) = default;
    Flat& operator=(const Flat&) = default;
    Flat& operator=(Flat&&) = default;

    std::vector<Room> getRooms() const;
};


#endif //FLAT_FLAT_H
