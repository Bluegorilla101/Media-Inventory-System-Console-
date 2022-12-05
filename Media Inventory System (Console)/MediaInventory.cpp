#include "MediaInventory.h"

MediaInventory::MediaInventory()
{
}

void MediaInventory::addMediaItem(MediaItem mediaItem)
{
	inventory.push_back(mediaItem);
}
std::string MediaInventory::toString()
{
	std::string out;

	for (const auto& mediaItem : inventory)
	{
		out += mediaItem.toString() + "\n";
	}

	return out;
}

