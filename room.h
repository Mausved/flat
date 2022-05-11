//
// Created by mai on 11.05.22.
//

#ifndef FLAT_ROOM_H
#define FLAT_ROOM_H

#include <string>
#include "wallpaper.h"

struct RoomSize {
    float length;
    float width;
    float height;
};


class Room {
private:
    std::string title{};
    RoomSize size{};
    bool needRoof{};
public:
    Room() = default;
    ~Room() = default;
    Room(const Room&) = default;
    Room(Room&&) = default;
    Room& operator=(const Room&) = default;
    Room& operator=(Room&&) = default;

    std::string getTitle() const;
    RoomSize getSize() const;
    bool getNeedRoof() const;

    void setTitle(const std::string& title);
    void setSize(const RoomSize& RoomSize);
    void setNeedRoof(const bool& needRoof);

    float countPerimeter() const;
    float countSurface() const;

    unsigned int countWallpaperRolls(const Wallpaper& wallpaper) const;

};


#endif //FLAT_ROOM_H
