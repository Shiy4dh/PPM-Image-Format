

#include <iostream>
#include <fstream>

// get file path
std::string getFilePath()
{
	std::cout << "This is an implementation of ppm Image Format." << '\n';
	std::cout << "Paste your filepath where the Image to be saved!" << '\n';
	std::cout << "Example:" << '\n';
	std::cout << "C:/Users/Name/imageName.ppm" << '\n';
	std::cout << '\n';
	std::cout << "filepath:";
	std::string path{};
	std::cin >> path;

	// save the image name
	std::cout << "Type the name of the image you want it to be saved as:\n";
	std::cout << "Save as :";
	std::string imageName{};
	std::cin >> imageName;


	std::string filepath = path + "\\" + imageName + ".ppm";
	return filepath;
}
