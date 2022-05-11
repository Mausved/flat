//
// Created by mai on 11.05.22.
//

#include "wallpaper.h"

std::string Wallpaper::getTitle() const{
    return this->title;
}

WallpaperSize Wallpaper::getSize() const{
    return this->size;
}

float Wallpaper::getPrice() const{
    return this->price;
}

void Wallpaper::setTitle(const std::string &Title) {
    this->title = Title;
}

void Wallpaper::setSize(const WallpaperSize &size) {
    this->size = size;
}

void Wallpaper::setPrice(const float &price) {
    this->price = price;
}

float Wallpaper::countSurface() const {
    return size.length * size.width;
}

float Wallpaper::countPrice(unsigned int rools) const {
    return rools * this->getPrice();
}
