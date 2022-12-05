#include "MediaItem.h"

MediaItem::MediaItem(std::string title, int year)
{
	this->title = title;
	this->year = year;
	this->numCopies = 1;
}

std::string MediaItem::toString() const
{
	return std::format("{} ({}) [{} {}]", title, year, numCopies, (numCopies == 1) ? "copy" : "copies");
}
