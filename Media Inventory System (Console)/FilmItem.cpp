#include "FilmItem.h"

const std::string FilmItem::toString()
{
	return std::format("{} ({}) directed by {} in {} format [{} {}]",
		title, year, director, filmFormat, numCopies, (numCopies == 1) ? "copy" : "copies");
}