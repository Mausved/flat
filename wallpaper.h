//
// Created by mai on 11.05.22.
//

#ifndef FLAT_WALLPAPER_H
#define FLAT_WALLPAPER_H

#include <string>

struct WallpaperSize {
    float width;
    float length;
};



class Wallpaper {
private:
    std::string title{};
    WallpaperSize size{};
    float price {};
public:
    Wallpaper() = default;
    ~Wallpaper() = default;
    Wallpaper(const Wallpaper&) = default;
    Wallpaper(Wallpaper&&) = default;
    Wallpaper& operator=(const Wallpaper&) = default;
    Wallpaper& operator=(Wallpaper&&) = default;

    std::string getTitle() const;
    WallpaperSize getSize() const;
    float getPrice() const;

    void setTitle(const std::string& title);
    void setSize(const WallpaperSize& size);
    void setPrice(const float& price);

    float countSurface() const;
    float countPrice(unsigned int rools) const;

};

#endif //FLAT_WALLPAPER_H
