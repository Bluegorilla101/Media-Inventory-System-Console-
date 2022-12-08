#pragma once
#include <ostream>
#include <format>

class MediaItem
{
public:
	MediaItem();
	MediaItem(std::string title, int year);
	virtual const std::string toString();

protected:
	std::string title;
	int year;
	int numCopies;
};

