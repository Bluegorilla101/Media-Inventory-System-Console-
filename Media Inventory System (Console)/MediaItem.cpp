#include "MediaItem.h"

MediaItem::MediaItem()
{
	this->title = "INVALID";
	this->year = 0;
	this->numCopies = 0;
}

MediaItem::MediaItem(std::string title, int year)
{
	this->title = title;
	this->year = year;
	this->numCopies = 1;
}

const std::string MediaItem::toString()
{
	return std::format("{} ({}) [{} {}]", title, year, numCopies, (numCopies == 1) ? "copy" : "copies");
}
