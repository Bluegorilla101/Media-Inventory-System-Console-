#pragma once
#include "MediaItem.h"
#include <vector>
#include <list>
#include "FilmItem.h"
#include "BookItem.h"
#include "AlbumItem.h"

class MediaInventory
{
public:
	MediaInventory();
	void addMediaItem(MediaItem* mediaItem);
	std::string toString();
	void processUserInput(const std::string &input);
private:
	std::list<MediaItem*> inventory;
	void tokenizeInput(const std::string &input, std::vector<std::string> &out);
	MediaItem* promptUserMediaItem(const std::string& mediaType);
};

