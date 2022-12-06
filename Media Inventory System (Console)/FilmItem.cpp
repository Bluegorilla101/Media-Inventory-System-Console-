#include "FilmItem.h"

FilmItem::FilmItem(std::string title, std::string director, int year, std::string filmFormat)
{
	this->title = title;
	this->director = director;
	this->year = year;
	this->filmFormat = filmFormat;
}
