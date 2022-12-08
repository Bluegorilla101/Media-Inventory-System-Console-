#include "BookItem.h"

const std::string BookItem::toString()
{
	return std::format("{} ({}) written by {} and published by {} [{} {}]", 
		title, year, author, publisher, numCopies, (numCopies == 1) ? "copy" : "copies");
}
