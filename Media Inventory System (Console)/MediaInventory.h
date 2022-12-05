#pragma once
#include "MediaItem.h"
#include <list>
#include "FilmItem.h"

class MediaInventory
{
public:
	MediaInventory();
	void addMediaItem(MediaItem mediaItem);
	std::string toString();
private:
	std::list<MediaItem> inventory;
};

