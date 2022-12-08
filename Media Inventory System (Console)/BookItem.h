#pragma once
#include "MediaItem.h"
class BookItem :
	public MediaItem
{
public:
	BookItem(std::string title, std::string author, int year, std::string publisher) 
		: MediaItem(title, year), author(author), publisher(publisher) {}
	const std::string toString() override;
private:\
	std::string author;
	std::string publisher;
};

