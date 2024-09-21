#include <iostream>
#include <fstream>
#include <filesystem>
#include "file.h"

int main()
{
	// create and open image
	std::ofstream image;
	
	// fetching filepath from the function
	std::string filepath = getFilePath();
	
	
	if (filepath.empty())
	{
		std::cout << "Filepath cannot be Empty!" << '\n';
	}

	image.open(filepath);

	if (!std::filesystem::exists(filepath))
	{
		std::cout << "Invalid File Path!" << '\n';
		return 1;
	}


	
	if (image.is_open())
	{
		std::cout << "Image file has been Created Successfully!" << '\n';

	}

	// header info
	image << "P3" << std::endl;
	image << "200 200" << std::endl;
	image << "255" << std::endl;
	// rgb values(bgr in ppm)
	for (int y{ 0 }; y < 200; ++y)
	{
		for (int x{ 0 }; x < 200; ++x)
		{
			image << x   << ' ' <<  x  << ' ' << x << std::endl;
		}
	}

	image.close();
	return 0;
}
