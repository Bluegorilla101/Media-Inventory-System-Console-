#include "MediaInventory.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <stdexcept>

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

void MediaInventory::processUserInput(const std::string &input)
{
	std::vector<std::string> tokens;
	tokenizeInput(input, tokens);

	if (tokens.size() == 1)
	{
		if (tokens[0] == "help")
		{
			std::cout << "Here is the help\n";
		}
		else if (tokens[0] == "list")
		{
			for (auto& mediaItem : inventory)
			{
				std::cout << mediaItem.toString() << "\n";
			}
		}
	}
	else if (tokens.size() == 2)
	{
		if (tokens[0] == "add")
		{
			if (tokens[1] == "film" || tokens[1] == "album" || tokens[1] == "book")
			{
				MediaItem mediaItem = promptUserMediaItem(tokens[1]);
				addMediaItem(mediaItem);
				std::cout << "Media added\n";
			}
		}
	}
	else
	{
		std::cout << "Invalid input\n";
	}
	

	/*for (auto& token : tokens)
	{
		std::cout << token << "\n";
	}*/
}

void MediaInventory::tokenizeInput(const std::string &input, std::vector<std::string> &out)
{
	std::stringstream ss(input);
	std::string s;
	while (std::getline(ss, s, ' '))
	{
		out.push_back(s);
	}
}

MediaItem MediaInventory::promptUserMediaItem(const std::string& mediaType)
{
	if (mediaType == "film")
	{
		std::cout << "What is the title of the film?\n";
		std::string title;
		std::getline(std::cin, title);

		std::cout << "Who is the director of the film?\n";
		std::string director;
		std::getline(std::cin, director);

		std::cout << "What year was the film released\n";
		std::string yearString;
		std::getline(std::cin, yearString);
		// TODO: Catch exception if string can't be converted to int
		int year = std::stoi(yearString);

		std::cout << "What is the format of the film?\n";
		std::string filmFormat;
		std::getline(std::cin, filmFormat);


		FilmItem filmItem(title, director, year, filmFormat);
		return filmItem;

	}
	else if (mediaType == "album")
	{

	}
	else if (mediaType == "book")
	{

	}
	else
	{
		throw std::invalid_argument("received invalid mediaType");
	}
}
