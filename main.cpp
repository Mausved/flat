//
// Created by mai on 11.05.22.
//

#include "flat.h"

#include <iostream>

Room enterTheRoom(unsigned int numberOfTheRoom) {
    std::string title;
    float length{0};
    float width{0};
    float height{0};
    bool needRoof{false};

    std::cout << "params of #" << numberOfTheRoom + 1 << " room:";

    std::cout << "\n\ttitle: ";
    std::cin >> title;

    std::cout << "\tdo you need to paint the roof?: ";
    std::cin >> needRoof;

    std::cout << "\tlength: ";
    std::cin >> length;

    std::cout << "\twidth: ";
    std::cin >> width;

    std::cout << "\theight: ";
    std::cin >> height;

    RoomSize roomSize{};
    roomSize.length = length;
    roomSize.width = width;
    roomSize.height = height;

    Room room{};
    room.setTitle(title);
    room.setNeedRoof(needRoof);
    room.setSize(roomSize);

    return room;
}

Wallpaper enterTheWallpaper() {
    std::string title{};
    float width{};
    float length{};
    float price{};

    std::cout << "params of wallpaper in this room:";

    std::cout << "\n\ttitle: ";
    std::cin >> title;

    std::cout << "\twidth: ";
    std::cin >> width;

    std::cout << "\tlength: ";
    std::cin >> length;

    std::cout << "\tprice: ";
    std::cin >> price;

    WallpaperSize size{};
    size.width = width;
    size.length = length;

    Wallpaper wallpaper;
    wallpaper.setTitle(title);
    wallpaper.setSize(size);
    wallpaper.setPrice(price);

    return wallpaper;
}

struct Summary {
    std::string roomTitle;
    std::string wallpaperTitle;
    unsigned int rolls{};
    float price{};
    float surface{};
};

int main(int argc, char *argv[]) {
    unsigned int roomsQuantity;
    std::cout << "Enter the number of the rooms: ";
    std::cin >> roomsQuantity;
    std::cout << std::endl;

    std::vector<Room> rooms{roomsQuantity};
    std::vector<Summary> summary{};
    float totalPrice{};
    unsigned int totalRools{};
    for (unsigned int i = 0; i < roomsQuantity; i++) {
        auto room = enterTheRoom(i);
        auto wallpaper = enterTheWallpaper();

        auto wallpaperRools = room.countWallpaperRolls(wallpaper);
        auto price = wallpaper.countPrice(wallpaperRools);

        summary.push_back({room.getTitle(), wallpaper.getTitle(), wallpaperRools, price, room.countSurface()});

        totalPrice += price;
        totalRools += wallpaperRools;
    }

    std::cout << "***print summary***" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout.unsetf(std::ios::showpos);

    for (auto& summ : summary) {
        std::cout << "room: " << summ.roomTitle << std::endl;
        std::cout << "surface: " << summ.surface << std::endl;
        std::cout << "wallpaper: " << summ.wallpaperTitle << std::endl;
        std::cout << "rolls: " << summ.rolls << std::endl;
        std::cout << "price: " << summ.price << std::endl;
        std::cout << "--------------------------------" << std::endl;
    }


    std::cout << "total price: " << totalPrice << std::endl;
    std::cout << "total rools: " << totalRools << std::endl;
}
