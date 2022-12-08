#pragma once
#include "MediaItem.h"
class AlbumItem :
    public MediaItem
{
public:
    AlbumItem(std::string title, std::string artist, int year, std::string label)
        : MediaItem(title, year), artist(artist), label(label) {}
    const std::string toString() override;
private:
    std::string artist;
    std::string label;
};

