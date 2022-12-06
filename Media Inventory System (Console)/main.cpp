#include <iostream>
#include "MediaItem.h"
#include "MediaInventory.h"

int main()
{
	MediaItem bigBoyItem("Big Boy", 1996);
	MediaItem smallGirlItem("Small Girl", 1998);

	MediaInventory mediaInventory;
	/*mediaInventory.addMediaItem(bigBoyItem);
	mediaInventory.addMediaItem(smallGirlItem);*/

	std::cout << mediaInventory.toString() << "\n";

	std::string line;

	try
	{
		while (std::getline(std::cin, line))
		{
			mediaInventory.processUserInput(line);
		}
	}
	catch (std::exception& e)
	{
		return 1;
	}
}

