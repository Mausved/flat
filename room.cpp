//
// Created by mai on 11.05.22.
//

#include "room.h"
#include <math.h>

std::string Room::getTitle() const {
    return this->title;
}

RoomSize Room::getSize() const {
    return this->size;
}

bool Room::getNeedRoof() const {
    return this->needRoof;
}

void Room::setTitle(const std::string &Title) {
    this->title = Title;
}

void Room::setSize(const RoomSize &size) {
    this->size = size;
}

void Room::setNeedRoof(const bool &needRoof) {
    this->needRoof = needRoof;
}

float Room::countPerimeter() const {
    return (size.width + size.length) * 2;
}

float Room::countSurface() const {
    auto surface = countPerimeter() * size.height;
    if (needRoof) {
        surface += size.width * size.length;
    }
    return surface;
}

unsigned int Room::countWallpaperRolls(const Wallpaper &wallpaper) const {
    auto wallSurface = wallpaper.countSurface();
    auto roomSurface = countSurface();

    unsigned int quantityOfWallpaperRolls = ceil(roomSurface / wallSurface);
    return quantityOfWallpaperRolls;
}
