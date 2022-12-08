#include "AlbumItem.h"

const std::string AlbumItem::toString()
{
	return std::format("{} ({}) by {} on the {} label [{} {}]",
		title, year, artist, label, numCopies, (numCopies == 1) ? "copy" : "copies");
}
