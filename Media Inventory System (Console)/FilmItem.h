#pragma once
#include "MediaItem.h"
#include <string>
class FilmItem :
    public MediaItem
{
public:
    FilmItem(std::string title, std::string director, int year, std::string filmFormat)
        : MediaItem(title, year), director(director), filmFormat(filmFormat) {}
    const std::string toString() override;
private:
    std::string director;
    std::string filmFormat;
};

