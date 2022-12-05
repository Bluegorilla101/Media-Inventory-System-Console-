#pragma once
#include <ostream>
#include <format>

class MediaItem
{
public:
	MediaItem(std::string title, int year);
	std::string toString() const;

protected:
	std::string title;
	int year;
	int numCopies;
};

